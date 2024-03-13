#include <stdio.h>
#include <stdbool.h>

/*
Write a function elapsed_time that takes as its arguments two time
structures and returns a time structure that represents the elapsed time (in
hours, minutes, and seconds) between the two times. So the call
elapsed_time (time1, time2)
where time1 represents 3:45:15 and time2 represents 9:44:03, should
return a time structure that represents 5 hours, 58 minutes, and 48
seconds. Be careful with times that cross midnight.
*/

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time elapsed_time(struct time time1, struct time time2){
    struct time res;
    res.seconds = time2.seconds - time1.seconds;
    res.minutes = time2.minutes - time1.minutes;
    res.hours = time2.hours - time1.hours;

    if (res.seconds < 0){
        res.seconds += 60;
        --res.minutes;
    }

    if (res.minutes < 0){
        res.minutes += 60;
        --res.hours;
    }

    if (res.hours < 0){
        res.hours+=24;
    }

    return res;

}

int main() {

    struct time time1 = {3, 45, 15};
    struct time time2 = {9, 44, 3};
    struct time difference = elapsed_time(time1, time2);

    printf("Difference between time2 and time1:\n");
    printf("%i:%i:%i", difference.hours, difference.minutes, difference.seconds);

    return 0;
};
