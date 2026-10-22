// Justin Brown
// Assignment 4

#include <iostream> // allows for input and output
using namespace std; //allows me to use cin and cout without std:: prefix

int main() { //this is where my program begins
    int choice; //this creates a variable 

    do { //this is a do while loop that will run at least once 
        cout << "Enter a menu choice (1, 2, or 3): "; //this makes the user enter a new choice 
        cin >> choice; //stores the users input into the variable choice 
 
        if (choice != 1 && choice != 2 && choice != 3) { // this chicks if the user input is not 1,2, or 3 
            cout << "Invalid choice, try again." << endl; // this tells the user that their input was invalid and to try again 
        } // ends the if statement 

    } while (choice != 1 && choice != 2 && choice != 3); // this is the condition for the do loop to keep running, if the user input is not 1,2, or 3 it will continue  

    cout << "You selected option " << choice << "." << endl; //one the user enters 1,2, or 3 the loop ends and this prints out what the user selected

    return 0; //ends the program 
} //ends the main function 