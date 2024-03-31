#include <stdio.h>
#include <stdbool.h>

/*
Given the definition of a date structure as defined in this chapter, write
a function called dateUpdate() that takes a pointer to a date
structure as its argument and that updates the structure to the following day
(see Program 8.4).
*/

struct date {
    int day;
    int month;
    int year;
};

bool isLeapYear(struct date* d){
    bool leapYearFlag;

    if ((d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0){
        leapYearFlag = true;
    } else {
        leapYearFlag = false;
    }

    return leapYearFlag;
}

int numberOfDays(struct date* d){
    int days;
    const int daysPerMonth[12] = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if (isLeapYear(d) && d->month == 2){
        days = 29;
    } else {
        days = daysPerMonth[d->month - 1];
    }

    return days;
}

struct date dateUpdate(struct date* today){
    struct date tomorrow;

    if (today->day != numberOfDays(today)){
        tomorrow.day = today->day + 1;
        tomorrow.month = today->month;
        tomorrow.year = today->year;
    } else if (today->month == 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today->year + 1;
    } else {
        tomorrow.day = 1;
        tomorrow.month = today->month + 1;
        tomorrow.year = today->year;
    }

    return tomorrow;
}

int main() {

    struct date thisDay = {31, 3, 2024};
    struct date nextDay;

    printf("Today's date: %i/%i/%i\n", thisDay.day, thisDay.month, thisDay.year);

    nextDay = dateUpdate(&thisDay);
    printf("Tomorrow's day is: %i/%i/%i\n", nextDay.day, nextDay.month, nextDay.year);

    return 0;
};
