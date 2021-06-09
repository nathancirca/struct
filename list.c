#include "list.h"

#include <stdio.h>
#include <stdlib.h>

#include "date.h"

List* insert(Date* date, List* list) {
    List* res = malloc(sizeof(date) + sizeof(list));
    res->value = date;
    res->next = list;
    return res;
}
void print_list_recu(List* list) {
    if (list->next) {
        print_date(list->value);
        printf(",");
        print_list_recu(list->next);
    } else {
        print_date(list->value);
    }
}
void print_list(List* list) {
    printf("[");
    print_list_recu(list);
    printf("]");
}