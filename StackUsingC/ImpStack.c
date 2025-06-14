#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

void isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        printf("Stack is Empty");
        return;
    }
}

void isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        printf("Stack is Full");
    }
}


int main(){
    struct stack *s;
    s->size = 80;
    s->top=-1;
    s->arr = (int*) malloc(s->size*sizeof(int));

    s->arr[0] = 10;
    s->top++;

    isEmpty(s);
    isFull(s);
    return 0;
}