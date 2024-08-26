// Andrew Powell 8/26/2024
// funWithStrings.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "\nWelcome to my string program";

    //Create a string object!
    string myStringObject;

    //Assign a value to new string object
    myStringObject = "this is an abcdefg string";

    //Output the string
    cout << "\n" << myStringObject << endl;

    //Get the size of my string
    cout << "\nThe size of " << myStringObject << " is: " << myStringObject.size() << endl;

    //output the chars at subscript (or position numbers) 2 and 14.
    //create two char variables

    char myChar01;
    char myChar02;

    //Assigning subscripts to char variables
    myChar01 = myStringObject[2];
    myChar02 = myStringObject[14];

    //Output the chars we extracted from our string object
    cout << "\nAt position 2 is: " << myChar01;
    cout << "\nmyStringObject[14] is: " << myStringObject[14] << "\n";

    //Use the at() function to get the char at subscript 16
    cout << "\nAt subscript 16 is: " << myStringObject.at(16) << "\n";

    char anotherChar;
    anotherChar = myStringObject.at(16);
    cout << "\nAt anotherChar is: " << anotherChar << "\n";

    //Concatenate two strings
    string anotherString = "xyz ";
    string twoStrings = "";

    //Join (Concatenate) two strings and output results
    twoStrings = anotherString + myStringObject;
    cout << "\ntwoStrings is: " << twoStrings << "\n";

    //Substr() is important and useful
    string mySubString = "";
    mySubString = myStringObject.substr(5, 2);
    cout << "\nmySubString is: " << mySubString << "\n";

    //Did it again to understand what pos and n meant and now I get it
    string mySubString2 = "";
    mySubString2 = myStringObject.substr(11,8);
    cout << "\nmySubString2 is: " << mySubString2 << "\n";

    //Thought we were doing this at first oops... we sorta did this actually
    cout << "\n" << "Char 2 is: " << myStringObject[2] << endl;
    cout << "Char 14 is: " << myStringObject[14] << endl;

    //This was ideas from the video so I could practice while I waited for you to set up GitHub in class:
    string test1 = "abcdefghijk";
    cout << "\ntest1: " << test1 << endl;

    cout << "\nsize: " << test1.size() << endl;

    cout << "\ntest1[0]: " << test1[0] << endl;
    cout << "test1.at(4): " << test1.at(4) << endl;

    test1[3] = 'D'; test1 [7] = 'H';
    cout << "\ntest1.at(3): " << test1.at(3) << endl;

    test1 = test1 + "lmnopqrs";
    cout << "\nPlus 1: " << test1 << endl;

    // Experimenting to see if this keeps the "lmnopqrs" and adds the next part to it. (works)
    test1 = test1 + "tuvwxyz";
    cout << "\nPlus 2: " << test1 << endl;

    return 0;
}
