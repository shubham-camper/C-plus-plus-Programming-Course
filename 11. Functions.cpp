#include <iostream>

using namespace std;

void sayHi(){
    cout << "Hello User\n";
}

void sayHi_name(string name){
    cout << "Hello " << name << endl;
}

void sayHi_name_age(string name_1, int age_1){
    cout << "Hello " << name_1 << " you are " << age_1 << endl;
}
int main()
{
    cout << "Top" << endl;
    sayHi();
    cout << "Bottom" << endl;
    sayHi_name("Mike");
    sayHi_name_age("Mike", 60);
    sayHi_name_age("Tom", 45);
    sayHi_name_age("Steve", 15);
    return 0;
}