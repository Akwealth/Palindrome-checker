/*
A program to find whether given number is a palindrome or not.


-------------------------------------------------------------
PSEUDO CODE
BEGIN

    // Step 1: Declare variables
    DECLARE num, originalNum, reversedNum, remainder AS INTEGER

    // Step 2: Take input from the user
    PRINT "Enter an integer: "
    READ num

    // Step 3: Store the original number for later comparison
    SET originalNum = num
    SET reversedNum = 0

    // Step 4: Reverse the number using a loop
    WHILE num != 0 DO
        remainder = num MOD 10          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder  // Append digit to reversed number
        num = num / 10                  // Remove the last digit from num
    END WHILE

    // Step 5: Compare the reversed number with the original
    IF originalNum == reversedNum THEN
        PRINT originalNum, " is a Palindrome."
    ELSE
        PRINT originalNum, " is NOT a Palindrome."
    END IF

END
*/