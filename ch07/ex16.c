#include <stdio.h>
#include <stdbool.h>

/*
Modify Program 7.15 (mistake in a book?) so that the user can convert any
number of integers.
Make provision for the program to terminate when a zero is typed in as the
value of the number to be converted.
*/

int gConvertedNumber[64];
long int gNumberToConvert;
int gBase;
int gDigit = 0;
int gOk = false;
int numbersToConvert;


void getNumberAndBase (void)
{
    printf ("Number to be converted? ");
    scanf ("%li", &gNumberToConvert);
    if (gNumberToConvert == 0){
        return 0;
    }

    while (!gOk){
        printf ("Base? ");
        scanf ("%i", &gBase);

        if ( gBase < 2 || gBase > 16 ) {
            printf ("Bad base - must be between 2 and 16\n");
            gBase = 10;
        } else {
            gOk = true;
        }
    }
}

void convertNumber(void)
{
	do {
		gConvertedNumber[gDigit] = gNumberToConvert % gBase;
		++gDigit;
		gNumberToConvert /= gBase;
	} while (gNumberToConvert != 0);
}

void displayConvertedNumber(void)
{
	const char baseDigits[16] =
	{ '0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	int nextDigit;

	printf("Converted number = ");

	for (--gDigit; gDigit >= 0; --gDigit) {
		nextDigit = gConvertedNumber[gDigit];
		printf("%c", baseDigits[nextDigit]);
	}
	printf("\n");
}

int main(){

    printf("How many numbers do you want to convert?\n");
    scanf("%i", &numbersToConvert);
    for (int i = 0; i < numbersToConvert; i++){
        getNumberAndBase ();
        convertNumber ();
        displayConvertedNumber ();
        gDigit = 0;
        gOk = false;
    }

    return 0;
}
