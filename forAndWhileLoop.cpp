//Andrew Powell 9/4/2024
//whileLoop.cpp
/*
 *This program will demonstrate the repetition of
 *
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "\n Welcome to my while and for loop program!" << endl;

    // Create a while loop that says hello 100 times.
    // A loop must have a loop control variable that is
    // initialized, checked and changed.

    // Create a loop control variable

    int myLoopControlVar = 0;

    // Create a while loop
    // Initialize our loop control variable

    myLoopControlVar = 1;

    // The while loop has a test condition inside its ()
    // This test condition is checked.

    while (myLoopControlVar <= 100)
        {

        cout << "\n Hello " << myLoopControlVar << endl;

        // Change the loop control variable
        // Incrementing (++ = +1)
        myLoopControlVar++;

        // Code up the sample while loop from today's video.
        // Write out all the numbers between 100 - 500 that are
        // divisible by 3 && (and) 5.
        int counter = 0;
        while (counter <= 500)
            {
           if (counter % 3 == 0 && counter % 5 == 0) {
               cout << counter << " is divisible by 3 and 5 (no remainder) " << endl;

           }
            // Change loop control Variable
            counter++;
        }

        // Create a for loop
        // What is the loop control variable
        // Where is the loop control variable initialized, checked and changed?

        for (int i = 1; i <= 10; i++) {
            cout << "in the for loop 'i' is: " << i << endl;
        }
    }
    return 0;
}

