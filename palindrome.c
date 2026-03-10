/*
A C program to find whether given number is a palindrome or not.

-------------------------------------------------------------
PROGRAM PSEUDO CODE

BEGIN
    DECLARE num, originalNum, reversedNum, remainder AS INTEGER

    PRINT "Enter an integer: "
    READ num

    SET originalNum = num
    SET reversedNum = 0

    WHILE num != 0 DO
        remainder = num MOD 10
        reversedNum = reversedNum * 10 + remainder  
        num = num / 10               
    END WHILE

    IF originalNum == reversedNum THEN
        PRINT originalNum, " is a Palindrome."
    ELSE
        PRINT originalNum, " is NOT a Palindrome."
    END IF
END

*/

#include <stdio.h>

int main(){
    // declare variables to hold values
    int num, originalNum, reversedNum, remainder;
    printf("Enter an integer to find out if it is a palindrome or not: \n"); // take input from user
    scanf("%d", &num);

    originalNum = num; // stores original num for later comparison
    reversedNum = 0; // initialise reversedNum as 0

    // Reverse the number using a while loop
    while (num != 0){
        remainder = num % 10; // this extracts last digit of the value
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num = num / 10; // remove last digit from the num
    }

    // Compare the reversed number with the original and print result
    if(originalNum == reversedNum){
        printf("Yay! %d is a Palindrome!\n", originalNum);
    } else {
        printf("Oops! %d is not a Palindrome. Try with a different number.\n", originalNum);
    }

    return 0;
};