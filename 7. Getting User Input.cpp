#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    cout<< "You are " << age << " years old";
    
    double age_1;
    cout << "Enter you age: ";
    cin >> age_1;
    
    cout << "You are "<< age_1 << "years old";
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Hello " << name;
}