#include <iostream>
#include "./headers/functions.h"
using namespace std;

int main() {
    print("Hello there!");
    // endl means end of line
    cout << "Hello, World!" << endl << 2+2 ;

    cout << endl << endl;

    // declare an integer i and then initialize it with 3
    int i;
    i = 4;
    cout << i << endl;

    // When dividing, if both numbers are of type int the result will be an
    // integer. Have to have at least one value as a float or double
    double j = 7.0 / 2;
    cout << j << endl;

    // auto leaves the type up to the compiler
    auto k = 45 / 3.5;
    cout << k << endl;
    guessmynumber();
    return 0;
}