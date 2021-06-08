#ifndef DATE
#define DATE

typedef struct _Date {
    int d;
    int m;
    int y;
} Date;
Date* create_date(int d, int m, int y);
void print_date(Date* date);
#endif