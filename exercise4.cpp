// Exercise 4: Basic CLI Menu Tool 
// Objective: Use a $switch$ statement to handle menu-driven logic, 
// a common pattern in command-line applications.

// main.cpp for Exercise 3
#include <iostream>
#include <cmath> // For pow()

using namespace std;

int main() {
    // ---- DON'T TOUCH THE MENU DISPLAY ----
    cout << "--- C++ Tool Menu ---\n";
    cout << "1. Calculate square of a number\n";
    cout << "2. Check system status\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";

    // ---- DON'T TOUCH THE VARIABLE DECLARATION ----
    int choice;

    // ---- YOUR CODE STARTS HERE ----

    // 1. Read the user's integer choice into the 'choice' variable.
        cin >> choice;

    // 2. Create a switch statement that acts based on the user's 'choice'.
    switch (choice) {
        // 3. Case 1:
                case 1:
        //    - Declare a double variable for the number.
                double number;
        //    - Prompt the user to "Enter a number: ".
                cout << "Enter a number: ";
        //    - Read the number from the user.
                cin >> number;
        //    - Calculate the square (you can use number * number or pow(number, 2)).
                number = pow(number , 2);
        //    - Print the result, e.g., "The square is: [result]".
                cout << "The square is: " << number;
        //    - Don't forget to break!
                break;


        // 4. Case 2:
                case 2:
        //    - Print the message: "System status: All systems nominal. As of August 6th, 2025."
                cout << "System status: All systems nominal. As of August 6th, 2025.";
        //    - Don't forget to break!
                break;


        // 5. Case 3:
                case 3: 
        //    - Print "Exiting program. Goodbye!".
                cout << "Exiting program. Goodbye!";
        //    - Don't forget to break!
                break;

        // 6. Default case:
                default:
        //    - This runs if the user enters a number that is not 1, 2, or 3.
        //    - Print "Invalid choice. Please run the program again."
                cout << "Invalid choice. Please run the program again";
                break;


    } // end of switch

    // ---- YOUR CODE ENDS HERE ----

    return 0;
}