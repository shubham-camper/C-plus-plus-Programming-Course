#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy\n";
    cout << phrase;
    cout << phrase.length(); // this will print out the length of the phrase
    cout << phrase[0];  // it will print out the 1 element of the phrase
    cout << phrase[2];  // it will print out the 3 element of the phrase
    phrase[0] = 'B';    // it will change the first element of the phrase from G to B
    cout << phrase.find("Academy", 0); // the first term of the Academy is at the 9th position of the phrase so it will print out 9
    cout << phrase.find("ffe", 0);
    cout << "Giraffe Academy" << endl;
    cout << phrase.substr(8, 3);
    cout << "Hello" << endl;
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;
    return 0;
}
