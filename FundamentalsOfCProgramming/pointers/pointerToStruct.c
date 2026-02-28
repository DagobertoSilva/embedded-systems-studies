#include <stdio.h>

typedef struct Date {
    int day, month, year;
} Date;

void printDate(Date *date) {
    printf("Date: %d/%d/%d\n", date->day, date->month, date->year);
}

int main() {
    Date date;
    Date *ptr = &date;

    date.day = 24;
    date.month = 2;
    date.year = 2005;

    printDate(&date);
    // Alternatively:
    // printDate(ptr);

    // Direct access without pointer:
    // printf("Date: %d/%d/%d\n", date.day, date.month, date.year);

    return 0;
}