
import java.util.Scanner;

public class primeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter element: ");
        int num = sc.nextInt();
        boolean isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 0; i < num / 2; i++) {
                if (num % 2 == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime) System.out.println("Number is prime");
        else System.out.println("Number is not prime");
    }
}
