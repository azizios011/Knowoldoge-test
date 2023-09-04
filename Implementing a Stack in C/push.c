#include "main.h"

void push(stack *s, int value)
{
    if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = value;
  }
  count++;
}
