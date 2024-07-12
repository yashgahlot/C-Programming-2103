/* 
 * File:    A1Q3.c 
 * Author:  Yash Gahlot  0308264g@acadiau.ca 
 * Date:    2024/01/30 
 * Version: 1.0 
 * Purpose: 
 *          The purpose of the program is to input the number of days left to their birthday from the user and then based 
 *          on that they get a countdown outputted which at the end wishses them Happy Birthday! using  a for loop. 
 */

#include <stdio.h>

int main() {
    //Declaring a variable days to store the number of days left for users birthday and later use it in the while loop.
    int days;

    //Prompting the user to enter the number of days left to their birthday.
    printf("How many days are left to your birthday? ");
    scanf("%d", &days);

    //setting the required condtion for the for-loop.
    for (int i = days; i >= 0; i--) {
        printf("%d \n", i);
    }

    //print Happy Birthday! to wish the user.
    printf("Happy Birthday! \n");

    return 0;
}