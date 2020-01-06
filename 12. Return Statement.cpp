#include <iostream>
using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;
}

double cube_1(double num_1){
    return num_1 * num_1 * num_1;
}
int main()
{
    double answer = cube(5.0);
    cout << answer;
    cout << cube_1(6.0);
    return 0;
}