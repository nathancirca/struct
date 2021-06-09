#include "date.h"

#ifndef PERSON
#define PERSON

typedef struct _Person {
    char* prenom;
    char* nom;
    Date* date;
} Person;
Person* create_person(char* prenom, char* nom, Date* date);
void print_person(Person* person);
#endif