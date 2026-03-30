#include "functions.h"


int main() 
{
    int choice;

    cout << "----- MENU -----" << endl;
    cout << "1. Sum of Squares" << endl; // Display the menu options to the user
    cout << "2. Factorial" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: "; // the user to enter their choice for the menu options
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            int n;
            cout << "Enter a number: ";// the user to enter a number for calculating the sum of squares
            cin >> n;

            cout << "Sum of squares from 1 to " << n // Output the result of sum of squares for the given number
                 << " is: " << sumOfSquares(n) << endl;  
            break; // Output the result of sum of squares for the given number
        }

        case 2:
        {
            int num;
            cout << "Enter a number to find its factorial: ";  // the user to enter a number for calculating the factorial
            cin >> num;

            cout << "Factorial of " << num  // Output the result of factorial for the given number
                 << " is: " << findFactorial(num) << endl;  // Output the result of factorial for the given number
            break;
        }

        case 3:
        {
            cout << "Program exited." << endl; // Output a message indicating that the program has exited
            break;
        }

        default:
        {
            cout << "Invalid choice!" << endl; // Output a message indicating that the user has entered an invalid choice
        }
    }

    
    return 0;
}