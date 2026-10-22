
/*
Name: Justin Brown
Assignment 5
Program: score_stats.cpp
*/

#include <iostream> // Allows us to use cout and cin
using namespace std; // Lets us write cout instead of std::cout

int main() { // Starts the main function

    const int SIZE = 5; // Sets the array size to 5
    int scores[SIZE]; // Creates an array to store 5 scores

    // Loop to enter all 5 scores
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter score " << i + 1 << ": "; // Asks for a score
        cin >> scores[i]; // Stores the score in the array
    }

    int sum = 0; // Starts the total at zero

    // Loop to calculate the sum of all scores
    for (int i = 0; i < SIZE; i++) {
        sum += scores[i]; // Adds the current score to the sum
    }

    int highest = scores[0]; // Starts highest at the first score
    int lowest = scores[0]; // Starts lowest at the first score

    // Loop to find the highest and lowest scores
    for (int i = 1; i < SIZE; i++) {

        if (scores[i] > highest) { // Checks if this score is higher
            highest = scores[i]; // Updates the highest score
        }

        if (scores[i] < lowest) { // Checks if this score is lower
            lowest = scores[i]; // Updates the lowest score
        }
    }

    double average = static_cast<double>(sum) / SIZE;
    // Converts sum to double so the average can contain decimals

    cout << "Scores: "; // Prints a label for the scores

    // Loop to print all scores on one line
    for (int i = 0; i < SIZE; i++) {
        cout << scores[i] << " "; // Prints each score
    }

    cout << endl; // Moves to the next line
    cout << "Sum: " << sum << endl; // Prints the sum
    cout << "Average: " << average << endl; // Prints the average
    cout << "Highest: " << highest << endl; // Prints the highest score
    cout << "Lowest: " << lowest << endl; // Prints the lowest score

    return 0; // Ends the program successfully
}
