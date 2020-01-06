#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index++;
    }
    /*do while loop starts looping and then checks the condition*/
    int index_1 = 6;
    do{
        cout << index_1 << endl;
        index++;
    }while(index_1 <= 5);
    return 0;
}