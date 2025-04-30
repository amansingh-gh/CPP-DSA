/* stack.c  — dynamic array‑based stack in C */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int   top;
    int   size;
    int  *data;
} Stack;



void stack_destroy(Stack *s)
{
    free(s->data);
    free(s);
}

void push(Stack *s, int value)
{
    if (s->top < s->size - 1) {
        s->data[++s->top] = value;
    } else {
        puts("Stack overflow");
    }
}

void pop(Stack *s)
{
    if (s->top == -1) {
        puts("Stack underflow");
    } else {
        --s->top;
    }
}

int getTop(const Stack *s)
{
    if (s->top == -1) {
        puts("No element in stack");
        return 0;                /* undefined value; caller should heed message */
    }
    return s->data[s->top];
}

int getSize(const Stack *s) { return s->top + 1; }

bool isEmpty(const Stack *s) { return s->top == -1; }

/*--------------- demo ---------------*/
int main(void)
{
    Stack *s = stack_create(5);

    /* Uncomment to test pushes
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    */

    printf("Top element: %d\n", getTop(s));
    printf("Current size: %d\n",get(s));
    printf("Is empty? %s\n", isEmpty(s) ? "yes" : "no");

    stack_destroy(s);
    return 0;
}
