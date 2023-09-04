#include "main.h"

int pop(stack *s)
{
    if (isempty(s))
        {
        printf("\n STACK EMPTY \n");
        }
    else
        {
        printf("Item popped= %d", s->items[s->top]);
        s->top--;
        }
    count--;
    printf("\n");
}
