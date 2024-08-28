// Amdrew Powell 8/28/2024
// userInputVariablePractice.cpp

// I was following along with the video at the beginning of class.

#include <iostream>
using namespace std;

int main() {
    // Guessing is the start in diagram?
    // User enter integer number
    // Program write out if that is even or odd

    int number;
    cout << "Please enter a whole number: ";
    // Or maybe the welcome message is start?

    cin >> number;
    //Cin is Trapezoid funneling down

    if(number%2==0)
        // if is the Diamond shape that goes in multiple directions
            //if is actually the True Statement usually
        {
        cout << "\nYour number is even" << endl;

    }
    else {
        // else is the "false" statement most likely

        cout << "\nYour number is odd" << endl;
    }
    // Guess return is the Stop?
    return 0;
}
