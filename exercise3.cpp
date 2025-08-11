
//     Exercise 3: Student Grade Summary
//     This program will ask the user how many students they want to enter. Then, using a loop, it will prompt for each student's name and score. After all students are entered, it will display the class average, the name and score of the student with the highest score, and the name and score of the student with the lowest score.

//     Concepts Covered:

//     Loops: Use a for loop to iterate a specific number of times (the number of students).

//     Data Types: int for counts, double for scores, and std::string for names.

//     Variables & Logic: Manage multiple variables to track the total score, highest score, lowest score, and the corresponding student names.

//     I/O Stream: Handle mixed input of strings and numbers (std::cin and std::getline or std::cin.ignore()).

//    # Example Interaction:

//     How many students are in the class? 3
//     ---
//     Enter name for student #1: Alice
//     Enter score for Alice: 95
//     ---
//     Enter name for student #2: Bob
//     Enter score for Bob: 78
//     ---
//     Enter name for student #3: Charlie
//     Enter score for Charlie: 88
//     ---
//     Class Summary:
//     Average Score: 87
//     Highest Scorer: Alice (95)
//     Lowest Scorer: Bob (78)

#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits
using namespace std;
int main() {
    // 1. Declare variables:
    int numStudents;
    double score, totalScore = 0.0;
    double highestScore = -1.0; // Start with a very low number
    double lowestScore = 101.0; // Start with a very high number
    std::string name, highestScorerName, lowestScorerName;

    // 2. Ask the user how many students to process and read the input.
    cout << "How many students are in the class?: ";
    cin >> numStudents;
    
    // 3. Start a for loop that runs from 1 to numStudents.
    for (int i = 1; i <= numStudents; ++i) {
        // 4. Inside the loop, prompt for the student's name and score.
        cout << "---";
        cout << "\nEnter name for student #" << i << ": ";
        getline(cin >> ws, name);
        cout << "Enter the score for student " << name << ": ";
        cin >> score;

        // 5. Add the current score to totalScore.
        totalScore += score;
        // 6. Check if the current score is the new highest score.
        if (score > highestScore){
            highestScore = score;
           highestScorerName = name;
        }
        //    If yes, update highestScore and highestScorerName.
        else {
            if(score < lowestScore){
                lowestScore = score;
                lowestScorerName = name;
            }
        }
        // 7. Check if the current score is the new lowest score.
        //    If yes, update lowestScore and lowestScorerName.
    } 
    totalScore /= numStudents;
    // 8. After the loop, calculate the average score.
    //    Handle the case where numStudents is 0 to avoid division by zero.

    // 9. Print the final summary (Average, Highest Scorer, Lowest Scorer).
    cout << "Class summary: ";
    cout << "\nAverage Score: " << totalScore;
    cout << "\nHighest Scorer: " << highestScorerName ;
    printf(" (%.f) ", highestScore);
    cout << "\nLowest Scorer: " << lowestScorerName;
    printf(" (%.f) ", lowestScore);

    return 0;
}