#include <iostream>
using namespace std;

int main()
{
    // Gussing game with unlimited tries
    
    int secretNum = 7;
    int guess;
    
    while(secretNum != guess){
        cout << "Enter guess: ";
        cin >> guess;
    }
    
    cout << "You win!";
    
    int secretNum_1 = 7;
    int guess_1;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    while(secretNum_1 != guess_1 && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    
    if(outOfGuesses){
        cout << "You Lose!";
    } else {
        cout << "You Win";
    }
    return 0;
}