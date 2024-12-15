#include<stdlib.h>
#include "stack.h"


struct stack
{
    int top;
    int *values;
};


void new_stack(int size){
    Stack *s = calloc(1,sizeof(Stack));
    s->values = calloc(size, sizeof(int));
    s->top = 0;
    return s;
}