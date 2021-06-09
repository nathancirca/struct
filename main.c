#include <stdio.h>
#include <stdlib.h>

#include "date.h"
#include "list.h"
#include "person.h"

int main() {
    char* p = "Nathan";
    char* n = "Galmiche";
    Date* d = create_date(29, 02, 2000);
    Date* d2 = create_date(21, 04, 1998);
    Person* person = create_person(p, n, d);
    print_person(person);
    printf("\n");
    List* l = insert(d2, insert(d, NULL));
    print_list(l);
    printf("\n");
}