#include "functions.h"



int sumOfSquares(int n) 
{ 
    int sum = 0;
    for (int i = 1; i <= n; i++) { // Iterate from 1 to n and calculate the sum of squares
        sum += i * i;// Recursive case: add the square of n to the sum of squares of (n-1)
    }
    return sum;  // Base case: if n is 0, return 0  

}

int findFactorial(int n)
{
    if (n == 0) {
        return 1;
    }
    int factorial = 1; // Initialize factorial to 1
    for (int i = 1; i <= n; i++) { // Iterate from 1 to n and calculate the factorial
        factorial *= i;
    } // Recursive case: multiply n by the factorial of (n-1)
    return factorial; // Base case: if n is 0, return 1
}




