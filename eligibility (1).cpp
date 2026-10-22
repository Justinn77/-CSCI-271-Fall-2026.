// Justin Brown
// Assignment 3

#include <iostream> // this allows my program to run input and output commmands for the program 
using namespace std; // this allows me to use cout and cin woithout having to write std constanlty through the code 

int main() { // This allows me to start running the program 
    int age; // this creates a variable for the age and int allows me to have a whole number for the age 
    int isMember; // this creates a variable called isMember 

    cout << "Enter your age: "; // this displays a message to the user for asking what is their age 
    cin >> age; // this recieves the input from the user and stores it in the variable age

    cout << "Are you a member? (1 = yes, 0 = no): "; // this displays "a message to the user asking if they are a member and what to input for yes or no"
    cin >> isMember; // this revieves the input from the user and stores it in the variable isMember

    if (age >= 60 || (age >= 18 && isMember == 1)) { // this means if the age is greater than or equal to 60 or if the age is greater than or equal to 18 and they are a member then it will run the code in the if statement and "||" means or and "&&" means and
        cout << "You qualify for the discount." << endl; // if the condition is true then it will display this message to the user saying they qualify for the discount
    } // this closes the if statement
    else { // this is the else statement that runs if the condition in the if statement is false
        cout << "You do not qualify for the discount." << endl; // 
    } // this closes the else statement

    return 0; // this returns 0 to indicate that the program has executed successfully
} // this closes the main function