// Exercise 5: Interactive Number Guessing Game 
// Objective: Bring all the concepts together! Use a $while$ loop to create 
// an interactive program that continues until the user decides to quit.
// main.cpp for Exercise 5
#include <iostream>

using namespace std;

int main() {
    // ---- DON'T TOUCH THESE ----
    const int SECRET_NUMBER = 42;
    int userGuess;

    cout << "--- Welcome to the Number Guessing Game! ---\n";
    cout << "I'm thinking of a number. Can you guess it?\n";
    
    // ---- YOUR CODE STARTS HERE ----

    // 1. Create a while(true) loop. This loop will run forever until we 'break' out of it.
    while (true) {
        // 2. Inside the loop, prompt the user to enter their guess.
        //    Also, tell them how to quit.
        //    For example: "Enter your guess (or -1 to quit): "
        cout << "Enter your guess ( or -1 for quit): ";


        // 3. Read the user's input into the 'userGuess' variable.
        cin >> userGuess;

        // 4. Write an if-else if-else chain to check the guess:
        // a. If 'userGuess' is -1:
        if (userGuess == -1){
        //    - Print "Thanks for playing!".
        cout << "Thanks for playing!";
        //    - Use the 'break;' command to exit the while loop.
        break;
        }
        if (userGuess == SECRET_NUMBER){
        // b. If 'userGuess' is equal to SECRET_NUMBER:
        //    - Print "Congratulations! You guessed it!".
        cout << "Congratulations! You guessed it!";
        //    - Use 'break;' to exit the loop.
            break;
        }   

        if (userGuess < SECRET_NUMBER){
        // c. If 'userGuess' is less than SECRET_NUMBER:
        //    - Print "Too low! Try again."
        cout << "Too low! Try again.";
        }
        else {

        // d. Else (the only remaining possibility is the guess is too high):
        //    - Print "Too high! Try again."
        cout << "Too high! Try again.";
        }

    } // end of while loop

    // 5. This line will run after the loop has been exited.
    cout << "Game over.\n";

    // ---- YOUR CODE ENDS HERE ----

    return 0;
}