#include <iostream>
using namespace std;

void guessmynumber () {
    bool keepgoing = true;
    int myanswer = 7;
    int theiranswer;
    while (keepgoing) {
        cout << "Guess my number: ";
        cin >> theiranswer;
        if (theiranswer < myanswer) {
            cout << "Your guess was to low. Please try again." << endl;
        }
        if (theiranswer > myanswer) {
            cout <<"Your guess was to high. Please try again." << endl;
        }
        if (theiranswer == myanswer) {
            cout << "You guessed the correct number!" << endl;
            keepgoing = false;
        }
    }
}