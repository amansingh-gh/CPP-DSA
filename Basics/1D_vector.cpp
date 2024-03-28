#include <iostream>
#include <vector>
using namespace std;

int findunique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{

    vector<int> arr;
    cout << sizeof(arr) << endl;

    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;

    //  To insert the elements in an array;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    // Prints the inserted value from an array/vector;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove an element from an array/vector
    arr.pop_back(); // It removes the last element form an array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " << endl;
    }

    // Initalizing the vector with user input;
    int user_vector;
    cout << "Enter the size of vector: ";
    cin >> user_vector;

    vector<int> brr(user_vector);
    cout << "The size of user_vector is : " << brr.size() << endl;
    cout << "The capacity of user_vector is : " << brr.capacity() << endl;

    // To check the vector is empty or not we use arr_name.empty();  it return 0 or 1;
    cout << "The user_vector is empty : " << brr.empty() << endl;

    Q1.Find unique element int n;
    cout << "Enter the size of vector array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int unique_elem = findunique(arr);
    cout << "The unique element from an array is : " << unique_elem;

    // Q2. Union of arrays;

    int arr_a[] = {10, 20, 30, 40, 50};
    int size_a = 5;

    int arr_b[] = {60, 70, 80, 90, 100};
    int size_b = 5;

    vector<int> ans;

    // Pushing arr_a elements in ans;
    for (int i = 0; i < size_a; i++)
    {
        ans.push_back(arr_a[i]);
    }

    // Pushing arr_b elements in ans;
    for (int i = 0; i < size_b; i++)
    {
        ans.push_back(arr_b[i]);
    }

    // Printing elements
    cout << "Printing the union : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    // Q3. Intersection of an array;
    vector<int> crr{1, 90, 5, 78, 99, 555};
    vector<int> drr{1, 5, 7, 10, 11, 23, 78, 55, 90};

    vector<int> res;
    // Outer loop
    for (int i = 0; i < crr.size(); i++)
    {
        int element = crr[i];
        // Inner loop
        for (int j = 0; j < drr.size(); j++)
        {
            if (element == drr[j])
            {
                drr[j] = -1; // This line marks  -1 as checked;
                res.push_back(element);
            }
        }
    }
    // Printing ans;
    for (auto value : res)
    {
        cout << value << " ";
    }

    cout << endl;

    // Q4. Find pair
    vector<int> arr_v{10, 20, 30, 40, 50, 60};
    vector<int> pair;

    for (int i = 0; i < arr_v.size(); i++)
    {
        int element = arr_v[i];
        for (int j = 0; j < arr_v.size(); j++)
        {
            if (arr_v[i] + arr_v[j] == 90)
            {
                pair.push_back(arr_v[i]);
                pair.push_back(arr_v[j]);
            }
        }
    }

    cout << "The pairs are: ";
    for (auto value : pair)
    {
        cout << value << " ";
    }

    // Q5. Find two pair sum
    vector<int> arr_sum{10, 20, 30, 40, 50, 60};
    vector<int> pair;
    int sum = 90;
    for (int i = 0; i < arr_sum.size(); i++)
    {
        int element = arr_sum[i];
        for (int j = 0; j < arr_sum.size(); j++)
        {
            if (arr_sum[i] + arr_sum[j] == sum)
            {
                cout << "The pair is : " << arr_sum[i] << "," << arr_sum[j] << endl;
            }
        }
    }

    // Q6. Find three pair sum
    vector<int> arr_three{10, 20, 30, 40, 50, 60};
    int sum = 60;
    for (int i = 0; i < arr_three.size(); i++)
    {
        for (int j = i + 1; j < arr_three.size(); j++)
        {

            for (int k = j + 1; k < arr_three.size(); k++)
            {

                if (arr_three[i] + arr_three[j] + arr_three[k] == sum)
                {
                    cout << "The pair is : " << arr_three[i] << "," << arr_three[j] << "," << arr_three[k] << endl;
                }
            }
        }
    }

    // Q7.Sort 0's and 1's;
    vector<int> sort{0, 1, 0, 1, 0, 0, 1, 1, 0};
    int start = 0;
    int end = sort.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (sort[i] == 0)
        {
            swap(sort[start], sort[i]);
            start++;
            i++;
        }
        else
        {
            swap(sort[end], sort[i]);
            end--;
        }
    }

    for (auto sorted : sort)
    {
        cout << sorted << " ";
    }

    return 0;
}