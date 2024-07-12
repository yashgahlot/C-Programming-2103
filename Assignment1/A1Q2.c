/* 
 * File:    A1Q2.c 
 * Author:  Yash Gahlot  0308264g@acadiau.ca 
 * Date:    2024/01/30 
 * Version: 1.0 
 * Purpose: 
 *          The purpose of the program is to input the number of days left to their birthday from the user and then based 
 *          on that they get a countdown outputted which at the end wishses them Happy Birthday! using  a while loop. 
 */


#include <stdio.h>

int main() {
    //Declaring and initializing a variable i to be later used in the while loop.
    int i = 1;

    //Prompting the user to enter the number of days left to their birthday.
    printf("How many days are left to your birthday? ");
    scanf("%d", &i);

    //setting the required condtion for the while loop.
    while (i > 0) {
        printf("%d \n", i);
        i--;
    }

    //print Happy Birthday! to wish the user.
    printf("Happy Birthday! \n");

    return 0;
}