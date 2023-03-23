#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
    cout << "Welcome to the GuessingGame" << endl << "Guess the number between 0 and 100" << endl;
    srand(time(0));
    int random = rand() % 100;
    int guess;
    int tries = 1;

    while (cin >> guess and guess != random)
    {
        if (guess > random)
            cout << "You guessed to high" << endl;
        else if (guess < random)
            cout << "You guessed to low" << endl;
        tries++;
    }
    cout << "You got it correct in " << tries << " Tries" << endl;
    return 0;
}

