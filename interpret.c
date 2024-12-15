#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "interpret.h"
#include "stack.h"

Stack *s = NULL;

void s_init(){
    s = new_stack(100);
}

void interpret (const char *source) {
    char op[10];
    char arg[10];

    sscanf (source, "%s%s", op, arg);
    printf("operação: %s\n", op);
    printf("argumento: %s\n",  arg);

    if(strcmp(op, "push") == 0){
        int value = atoi(arg);
        stack_push(s, value);
    }
    stack_print(s);
}