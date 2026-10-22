// Justin Brown
// Assignment 3

#include <iostream> // this allows my program to use input and outpit ensuring that i can run my program 
using namespace std; // this allows me to use cout and cin without having to typr std throughout the program

int main() { //This allows me to start running the program 
    int temperature; // This creates a variable named temapture that will hold the value of the temmpature the user wants to input 

    cout << "Enter the temperature (F): "; // this allows the text to display on the screen "Enter the temperature (F)"
    cin >> temperature; // this takes the user information and stores it in the variable tempature 

    if (temperature < 32) { //this will check if the tempature is less than 32 and if it is it will display "Thats Freezing"
        cout << "That's Freezing." << endl; //If the tempature is less than 32 it will display "Thats Freezing" and the endl moves the cursor to the next line so that the next output will be on a new line 
    } // This closes the if statemnt 
    else if (temperature <= 59) { // this will check if the tempature isless than or equal to 59 and if so it will display "Thats Cold"
        cout << "That's Cold." << endl; // If the tempature is between 32 and 59 it will display "Thats Cold" and the endl ends the line and starts a new one 
    } // closes the else if statement 
    else if (temperature <= 75) { // 
        cout << "That's Mild." << endl; // 
    } // closes the else if statemnt 
    else { // if none of the previous conditions were not true then this will run and display "Thats Hot"
        cout << "That's Hot." << endl; // If the tempature is greater than 75 it will display "Thats Hot" and the endl ends the line 
    } // this closes the else statement

    return 0; // this tells the program is finsihed 
} // this closes the main function and ends 