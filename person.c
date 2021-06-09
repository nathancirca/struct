#include "person.h"

#include <stdio.h>
#include <stdlib.h>

#include "date.h"

Person* create_person(char* prenom, char* nom, Date* date) {
    Person* res = malloc(sizeof(Person));
    res->prenom = prenom;
    res->nom = nom;
    res->date = date;
    return res;
}
void print_person(Person* person) {
    printf("%s %s né le ", person->prenom, person->nom);
    print_date(person->date);
}