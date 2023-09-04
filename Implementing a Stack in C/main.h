#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#define MAX 10

int count = 0;

typedef struct stack
{
    int items[MAX];
    int top;
} stack;

void initializeStack(stack *s);
void push(stack *s, int value);
int pop(stack *s);
int isEmpty(stack *s);
int isfull(stack *s);
#endif
