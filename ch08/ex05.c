#include <stdio.h>
#include <stdbool.h>

/*
Write a function called clockKeeper() that takes as its argument a
dateAndTime structure as defined in this chapter. The function should
call the timeUpdate() function, and if the time reaches midnight, the
function should call the dateUpdate function to switch over to the next
day. Have the function return the updated dateAndTime structure.
*/

struct date {
    int day;
    int month;
    int year;
};

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime {
    struct date sdate;
    struct time stime;
};

struct time timeUpdate (struct time now) {
    ++now.seconds;
    printf("%i\n", now.seconds);
    if (now.seconds == 60) { // next minute
        now.seconds = 0;
        ++now.minutes;
        if (now.minutes == 60) { // next hour
            now.minutes = 0;
            ++now.hours;
            if (now.hours == 24) // midnight
                now.hours = 0;
        }
    }
    return now;
}

struct date dateUpdate(struct date today){
    struct date tomorrow;
    int numberOfDays (struct date d);
    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) { // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else { // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

bool isLeapYear (struct date d)
{
    bool leapYearFlag;
    if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
         d.year % 400 == 0 )
        leapYearFlag = true; // It's a leap year
    else
        leapYearFlag = false; // Not a leap year
    return leapYearFlag;
}

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
    int days;
    const int daysPerMonth[12] =
            { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ( isLeapYear (d) && d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];
    return days;
}

struct dateAndTime clockTimer(struct dateAndTime dt){
    dt.stime = timeUpdate(dt.stime);
    if (dt.stime.hours == 0){
        dt.sdate = dateUpdate(dt.sdate);
    }
    return dt;
}

int main() {

    struct dateAndTime dt = {{29, 6, 2001}, {23, 59, 59} };

    printf("Date and Time: %i/%i/%i, %i:%i:%i\n", dt.sdate.day, dt.sdate.month, dt.sdate.year,
           dt.stime.hours, dt.stime.minutes, dt.stime.seconds);
    printf("Date and Time after 1 second:\n");
    dt = clockTimer(dt);
    printf("Date and Time: %i/%i/%i, %i:%i:%i\n", dt.sdate.day, dt.sdate.month, dt.sdate.year,
           dt.stime.hours, dt.stime.minutes, dt.stime.seconds);


    return 0;
}
