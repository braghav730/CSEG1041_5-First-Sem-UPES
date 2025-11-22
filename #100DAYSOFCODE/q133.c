//Create an enum for months and print how many days each month has.
#include <stdio.h>

int main() {
    enum Month { 
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, 
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER 
    };

    int daysInMonth[] = { 
        31, 
        28,
        31, 
        30, 
        31, 
        30, 
        31, 
        31,
        30, 
        31, 
        30, 
        31  
    };

    printf("JANUARY = %d days\n", daysInMonth[JANUARY]);
    printf("FEBRUARY = %d days\n", daysInMonth[FEBRUARY]);
    printf("MARCH = %d days\n", daysInMonth[MARCH]);
    printf("APRIL = %d days\n", daysInMonth[APRIL]);
    printf("MAY = %d days\n", daysInMonth[MAY]);
    printf("JUNE = %d days\n", daysInMonth[JUNE]);
    printf("JULY = %d days\n", daysInMonth[JULY]);
    printf("AUGUST = %d days\n", daysInMonth[AUGUST]);
    printf("SEPTEMBER = %d days\n", daysInMonth[SEPTEMBER]);
    printf("OCTOBER = %d days\n", daysInMonth[OCTOBER]);
    printf("NOVEMBER = %d days\n", daysInMonth[NOVEMBER]);
    printf("DECEMBER = %d days\n", daysInMonth[DECEMBER]);

    return 0;
}
