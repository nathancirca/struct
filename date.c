#include "date.h"

#include <stdio.h>
#include <stdlib.h>

Date* create_date(int d, int m, int y) {
    Date* res = malloc(sizeof(Date));
    res->d = d;
    res->m = m;
    res->y = y;
    return res;
}
void print_date(Date* date) { printf("%d/%d/%d", date->d, date->m, date->y); }
