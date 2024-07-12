/* 
 * File:    A1Q1.c 
 * Author:  Yash Gahlot  0308264g@acadiau.ca 
 * Date:    2024/01/30 
 * Version: 1.0 
 * Purpose: 
 *          The purpose of the program is to input a number from the user(their age) and then based 
 *          on that they get their age outputted as a level with a quote using if statements. 
 */

#include <stdio.h>

int main() {
    //Declaring a variable for the age of the user.
    int age;

    //Prompting the user to enter their age.
    printf("Enter your age: "); 
    scanf("%d", &age);

    //setting the required if condtion for correct output.
    if (age > 50) {            
        printf("Congratulations! you're past level %d of life. Keep going!\n", age);
    } else {
        printf("You're still a newbie\(level- %d \) to use this program, come back later when you're at a higher level.\n", age);
    }

    return 0;
}

