0x08. C - Recursion
/* function recursion in C */
A function can call itself from a statement inside the
body of the function itself, and that is called recursive.

0: main.h
The main.h file serves as a header file for a C program. It includes function declarations for several operations such as character output, string manipulation, factorial calculation, exponentiation, square root computation, and prime number determination. These functions can be used in the program to perform these specific tasks.

1: The _puts_recursion function recursively prints a string followed by a new line. It achieves this by checking if the current character is the null terminator ('\0'). If it is, it prints a new line character and returns. Otherwise, it prints the current character and recursively calls itself with the next character in the string.i

2: The _strlen_recursion function recursively calculates the length of a string. It checks if the current character is the null terminator ('\0'). If it is, it returns 0, indicating the end of the string. Otherwise, it recursively calls itself with the next character in the string and adds 1 to the result, representing the length of the stringi.

3: The factorial function recursively calculates the factorial of a given number. It checks if the input x is less than 0. If it is, it returns -1 to indicate an invalid input. If x is 0, it returns 1 as the base case of factorial. Otherwise, it recursively calls itself with x decremented by 1 and multiplies the result by x. This process continues until x reaches 0, and the final result is returned.i

4: The _pow_recursion function recursively calculates the value of x raised to the power of y. It first checks if x is equal to 1, in which case it returns 1 as the base case. Then, it checks if y is less than 0, returning -1 to indicate an invalid exponent. If y is 0, it returns 1 as the base case of exponentiation. Otherwise, it recursively calls itself with y decremented by 1 and multiplies the result by x. This process continues until y reaches 0, and the final result is returned.

5: The _sqrt_recursion function recursively calculates the square root of a number by calling the sqrt_function. It first checks if the input i is less than 0, returning -1 to indicate an invalid input. If i is a non-negative number, it calls the sqrt_function with i as the number to calculate the square root of and 0 as the initial iterator.

The sqrt_function recursively iterates over j to find the natural square root of i. It checks if the square of the current value of j is greater than i, returning -1 to indicate that the square root is not a whole number. If the square of j is equal to i, it returns i as the square root. Otherwise, it recursively calls itself with i and j + 1, continuing the iteration until the square root is found.

6:The _sqrt_recursion function takes a number as input and returns its square root using a recursive approach. It first checks if the input is less than 0, returning -1 to indicate an invalid input. If the input is valid, it calls the sqrt_function recursively with the input and an initial iterator value of 0. The sqrt_function then recursively iterates over the iterator value to find the natural square root of the input. If the square of the current iterator is greater than the input, -1 is returned. If the square of the iterator is equal to the input, the input itself is returned as the square root. Otherwise, the sqrt_function is recursively called with the incremented iterator value. This recursive process continues until the square root is found or -1 is returned if no exact square root is found.

