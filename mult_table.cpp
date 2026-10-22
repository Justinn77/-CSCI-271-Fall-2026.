//Justin Brown
//Assignment 4 

#include <iostream> //allows me to use cout and cin
using namespace std; // lets me use cout and cin without std::prefix

int main() { //This is where my C++ program starts running
    int number; //this is me creating a variable called number to store what the users enters

    cout << "Enter a number: "; //ask the user to enter a number
    cin >> number; //reads the number the user enters and stores it in the number variable 

    for (int i = 1; i <= 10; i++) { //this creates a for loop that will run for 1-10 starts at 1 continues through 10 and incements by 1 each time that increasesthe value of i by 1 each time for the loop
        cout << number << " x " << i << " = " << number * i << endl; //this prints out the multiplication table for the number the user entered
    } //ends off the loop

    return 0; // ends the programand resets as that indicates the program ran successfully
} // ends the main function 