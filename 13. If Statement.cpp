#include <iostream>
using namespace std;

int getMax(int num1, int num2){
    int result;
    
    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int getMax_1(int num_1, int num_2, int num_3){
    int result;
    
    if(num_1 >= num_2 && num_1 >= num_3){
        result = num_1;
    } else if(num_2 >= num_1 && num_2 >= num_3){
        result = num_2;
    } else {
        result = num_3;
    }
    return result
}
int main()
{
    bool isMale = false;
    bool isTall = true;
    
    if(isMale && isTall){
        cout << "You are a tall male";
    } else if(isMale && !isTall){
        cout << "You are a short male";
    } else if(!isMale && isTall){
        cout << "You are tall but not male";
        
    }else {
        cout << "You are not male and not tall";
    }
    
    cout << getMax(2, 5);
    cout << getMax_1(2, 5, 8);
    return 0;
}