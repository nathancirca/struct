#include <stdio.h>
#include <stdlib.h>

#include "date.h"
#include "person.h"

int main() {
    char* p = "Nathan";
    char* n = "Galmiche";
    Date* d = create_date(29, 02, 2000);
    Person* person = create_person(p, n, d);
    print_person(person);
}