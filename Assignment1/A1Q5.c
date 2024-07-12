/* 
 * File:    A1Q5.c 
 * Author:  Yash Gahlot  0308264g@acadiau.ca 
 * Date:    2024/01/30 
 * Version: 1.0 
 * Purpose: 
 *          The purpose of the program is to make the user choose between A,B or C and take it as an input. 
 *          Depending on the choice of user, the program uses switch case statements to decide what the user 
 *          should have for breakfast and outputs that to the user.
 */

#include <stdio.h>

int main() {
    //Declaring a variable to store the option the user choses to go with.
    char choice;

    //Asking user to chooose one of the following options.
    printf("Choose one (A/B/C) to know what you should have for breakfast: ");
    //Taking input from the user.
    choice = getchar();

    //Writing the appropriate switch case statements to output what the user should have for breakfast as per the option they chose.
    switch (choice) {
        case 'A':
        case 'a':
            printf("You should have an Omlette.\n");
            break;

        case 'B':
        case 'b':
            printf("You should have Cereal.\n");
            break;

        case 'C':
        case 'c':
            printf("You should have Avoacado Toast.\n");
            break;

        default:
            //telling the user they made an invalid choice of input.
            printf("Invalid choice\n");
    }

    return 0;
}