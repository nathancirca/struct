#include <stdio.h>
#include <stdlib.h>

#include "date.h"

int main() {
    Date* date = create_date(29, 02, 2000);
    print_date(date);
}