/*
Name: Justin Brown
Assignment 5
Program: score_count.cpp
*/


#include <iostream> // Allows us to use cout and cin
using namespace std; // Lets us use cout without std::

int main() { // Starts the main function

    const int SIZE = 10; // Sets the array size to 10

    // Creates the exact array 
    int data[10] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};

    int target; // Stores the number the user wants to find

    cout << "Enter a number to search for: "; // Asks for the target
    cin >> target; // Reads the target number

    int foundIndex = -1; // -1 means the target has not been found
    int count = 0; // Starts the occurrence counter at zero

    // Loop through the array from index 0 to index 9
    for (int i = 0; i < SIZE; i++) {

        if (data[i] == target) { // Checks if the current value matches

            if (foundIndex == -1) { // Checks if this is the first match
                foundIndex = i; // Saves the first matching index
            }

            count++; // Adds one to the occurrence counter
        }
    }

    if (foundIndex != -1) { // Checks whether the target was found

        cout << target << " first found at index "
             << foundIndex << endl; // Prints the first matching index

        cout << target << " appears " << count
             << " time(s)" << endl; // Prints the total occurrences

    } else { // Runs if no match was found

        cout << target << " was not found." << endl;
        // Tells the user the target is absent
    }

    return 0; // Ends the program successfully
}
