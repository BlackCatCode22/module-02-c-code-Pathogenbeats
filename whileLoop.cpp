//Andrew Powell 9/4/2024
//whileLoop.cpp

#include <iostream>
using namespace std;

int main()
{
    int counter = 100;
    while (counter<=500)
        {
        if (counter%3==0 && counter%5==0)
            cout << counter << " is divisible\n";

        cout << "infinite loop";

    }


    return 0;
}
