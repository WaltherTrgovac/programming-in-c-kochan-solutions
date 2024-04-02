#include <stdio.h>

/*
Write a program that determines whether your particular computer
performs an arithmetic or a logical right shift.
*/

void machineTest(){
    // if the sign bit is 1, then two things can happen
    // when shifting:
    // arithmetic right shift -> 1 is shifted in
    // logical right shift -> 0 is shifted in
    signed int w = 0x0; // all bits are set to 0
    w >>= 1;

    if (w >= 0x0){
        printf("Your computer performs logical right shift!\n");
    } else {
        printf("Your computer performs arithmetic right shift\n");
    }

    return;
}

int main() {

    machineTest();

    return 0;
};
