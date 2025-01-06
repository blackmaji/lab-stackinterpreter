#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

struct node{
    char key[15];
    int value;
    struct node* next;
};

struct list{
    struct node* first;
}

static struct node* list_find (List* l, char* key){
    struct node* next = l-> first;
    while (next) {
        if(strcmp(next->key, key) == 0)
            return next;
        next = next->next;
    }
    return NULL;
}