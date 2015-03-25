// Created by Kristie Nguyen on 10/6/14.
// Guessing Game - A game that outputs a message based on user guess.

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main(void)
{
    // 1 Prompt user for guess.
    cout << "Guess the Number Game" << endl;
    cout << endl;

    // 2 Process random number.
    int number;
    
    default_random_engine generator;
    uniform_int_distribution <int> distribution( 1, 100 );
    int correctGuess = distribution(generator);

    // 3 Determine if user wins, loses, or tries again.
    do
    {
        cout << "Please guess a number from 1 to 100: ";
        cin >> number;
        cin.ignore(999, '\n');

        if ( cin.fail() )
        {
            cin.clear();
            cout << "Data out of bound. Press ENTER and try again.";
            cin.ignore(999, '\n');
            continue;
        }
        if ( number == correctGuess )
            cout << "You win!" << endl;
        else if ( number > correctGuess )
            cout << "Too high" << endl;
        else if ( number < correctGuess )
            cout << "Too low" << endl;
    } while ( number != correctGuess);

    // 4 Finish up.
    cout << endl << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    return 0;
}
