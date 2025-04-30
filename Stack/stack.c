#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

void push(struct stack *s, int data){
    if(s->top < s->size-1){
        printf("Stack has space\n");
        s->top++;
        s->arr[s->top] = data;
        printf("%d inserted\n", s->arr[s->top]);
    }else{
        printf("Stack is full\n");
    }
}

void pop(struct stack *s){
    if(s->top == -1){
        printf("Stack underflow");
    }
    s->top --;
}

void getTop(struct stack *s){
    if(s->top == -1){
        printf("Stack underflow");
    }
    printf("%d ",s->arr[s->top]);
}

void display(struct stack *s){
    if(s->top == -1){
        printf("Stack is Empty");
        return;
    }
    // stack elements from top to bottom
    printf("Stack elements (top to bottom):\n");
    for(int i=s->top; i>=0; i--){
        printf("%d ", s->arr[i]);
    }
    printf("\nTotal number of elements: %d\n", s->top + 1);
}

int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 20;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));


    push(s,11);
    push(s,12);
    push(s,13);
    push(s,14);
    push(s,15);
    display(s);
    pop(s);
    display(s);
    getTop(s);
    return 0;
}