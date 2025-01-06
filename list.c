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

List* new_list(){
    list* l = calloc (l, sizeof(List));
    l->first = NULL;
    return l;
}

void list_append(List* l, char* key, int value){
    struct node* node = calloc(l, sizeof(struct node));
    strcpy(node->key, key);
    node->value = value;
    node->next = l->first;
    l->first = node;
}