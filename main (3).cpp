#include <iostream> // This allows me to use cout and cin for showing the code and getting input
#include <string> // This allows me to use strings so that i can store the name of the user 
using namespace std; // This allows me to use cout and cin

int main() { // This allows me to start running the program
    string name; // This allows me to create a variable called name that will store my name when I respond for the input
    int age; // This allows me to create a variable for age and store my age as a whole number when i respond for the input

    cout << "Enter your name: "; // This allows me to ask the user their name and store it in the varianle name 
    cin >> name; // This reads the name that the user types and stores the information in name 

    cout << "Enter your age: "; // This allows me to ask the user their age 
    cin >> age; // This allows the code to read the age and stores it in age

    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl; // This here prints the greeting of introducing my name and age as a user 

    return 0; // This here ends the program successfully 
} // This here shows the end of main ()