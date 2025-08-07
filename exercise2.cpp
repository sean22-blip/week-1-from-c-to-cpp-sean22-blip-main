
// Exercise 2: Simple Access Control 
// Objective: Apply conditional logic (if-else) with $string$ comparison. 
// In C++, you can compare strings directly using ==.

// main.cpp for Exercise 2
#include <iostream>
#include <string>

using namespace std;

int main() {
    // ---- DON'T TOUCH THESE CONSTANTS ----
    const string SECRET_USER = "admin";
    const string SECRET_PASSWORD = "password123";

    // ---- DON'T TOUCH THE VARIABLE DECLARATIONS ----
    string inputUser;
    string inputPassword;

    // ---- YOUR CODE STARTS HERE ----

    // 1. Prompt the user to enter their username and read the input into 'inputUser'.


    // 2. Prompt the user to enter their password and read the input into 'inputPassword'.


    // 3. Write an if-else statement to check if the 'inputUser' AND 'inputPassword'
    //    match the secret credentials.
    //    >> HINT: You can use the '==' operator to compare strings and '&&' to combine conditions.


    // 4. If both are correct, print "Access Granted."


    // 5. Otherwise, print "Access Denied. Incorrect username or password."



    // ---- YOUR CODE ENDS HERE ----

    return 0;
}