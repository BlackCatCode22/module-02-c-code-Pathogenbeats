// Andrew Powell 8/28/24
// functionPractice.cpp

#include <iostream>
using namespace std;

// Function Prototypes go here.
// This is declaring a function.
string oddOrEven(int);

//create and use the following four functions.
int sumTwoWholeNumbers(int,int);
int squareANumber(int);
string sayHelloToTheUSer(string);
int largestOfThreeWholeNumbers(int,int, int);

int main() {
    cout << "\nWelcome to my Function Program!" << endl;

    string oddOrEvenString = "";

    int userInput = 0;
    // Get input from the user.

    cout << "\nPlease enter your number: ";
    cin >> userInput;

    // call the odd or even function.

    oddOrEvenString = oddOrEven(userInput);
    cout << "\nYour Input Number Was " << oddOrEvenString << endl;

    return 0;
}

string oddOrEven(int num1) {
    string myReturnStr = "";

    if (num1 % 2 == 0) {
        myReturnStr = "Even";
        //num1 is even
    }
     else
     {
         myReturnStr = "Odd";
         //this is the false statement
     }
    return myReturnStr;
}
