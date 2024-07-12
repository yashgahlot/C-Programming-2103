/* 
 * File:    A1Q4.c 
 * Author:  Yash Gahlot  0308264g@acadiau.ca 
 * Date:    2024/01/30 
 * Version: 1.0 
 * Purpose: 
 *          The purpose of the program is to input the number of days left to their birthday from the user and then based 
 *          on that they get a countdown outputted which at the end wishses them Happy Birthday! using  a do-while loop. 
 */

#include <stdio.h>

int main() {
    //Declaring a variable days to store number of days left to users birthday, i and later using them in the while loop.
    int num;
    int i = 0;

    //Prompting the user to enter the number of days left to their birthday.   
    printf("How many days are left till your birthday? ");
    scanf("%d", &num);

    //setting the required condtion for the do-while loop.
    do {
        printf("%d \n", num);
        num--;
    } while (i < num);

    //printing Happy Birthday! to wish the user.
    printf("Happy Birthday! \n");

    return 0;
}