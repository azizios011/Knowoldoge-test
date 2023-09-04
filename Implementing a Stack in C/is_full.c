#include "main.h"

int isfull(stack *s)
{
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}