#include <stdio.h>

/*
If you take the value of N as computed in exercise 2, subtract 621,049
from it, and then take that result modulo 7, you get a number from 0 to 6
that represents the day of the week (Sunday through Saturday,
respectively) on which the particular day falls. For example, the value of
N computed for August 8, 2004, is 732,239 as derived previously.
732,239 − 621,049 gives 111,190, and 111,190 % 7 gives 2, indicating
that this date falls on a Tuesday.
Use the functions developed in the previous exercise to develop a
program that displays the day of the week on which a particular date falls.
Make certain that the program displays the day of the week in English
(such as “Monday”).
*/


struct date {
    int day;
    int month;
    int year;
};

int f(int year, int month){
    if (month <= 2){
        return year - 1;
    } else {
        return year;
    }
}

int g(int month){
    if (month <= 2){
        return month+=13;
    } else {
        return month+=1;
    }
}

int N(struct date d){
    return (1461 * f(d.year, d.month) / 4) + (153 * g(d.month) / 5 + d.day);
}

void day_of_the_week(int n){
    int day = (n - 621049) % 7;

    switch (day){
        case 0:
            printf("This date falls on Monday");
            return;
        case 1:
            printf("This date falls on Tuesday");
            return;
        case 2:
            printf("This date falls on Wednesday");
            return;
        case 3:
            printf("This date falls on Thursday");
            return;
        case 4:
            printf("This date falls on Friday");
            return;
        case 5:
            printf("This date falls on Saturday");
            return;
        case 6:
            printf("This date falls on Sunday");
            return;
    }

    return;
}

int main() {

    struct date example = {9, 8, 2004};

    day_of_the_week(N(example));

    return 0;

};
