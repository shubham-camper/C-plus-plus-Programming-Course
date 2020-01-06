#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};
    cout << luckyNums[0];
    cout << luckyNums[2];
    
    luckyNums[0] = 19;
    cout << luckyNums[0];
    
    luckyNums[10] = 100;
    cout << luckyNums[10];
    
    int luckyNums_1[20];
    luckyNums_1[0] = 100;
    
    cout << luckyNums_1[0];
    return 0;
}