#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 5;
    cout << -5.5;
    cout << 5 + 7;
    cout << 5 * 7;
    cout << 10 % 3;
    cout << 4 + 5 * 10;
    cout << (4 + 5) * 10;
    
    int wnum = 5;
    double dnum = 5.5;
    
    wnum++;
    
    cout << wnum;
    
    wnum--;
    
    cout << wnum;
    
    wnum += 80;
    
    cout << 5.5 + 9;
    
    cout << wnum;
    cout << 10 / 3;
    cout << 10.0 / 3.0;
    cout << pow(2, 5);
    cout << pow(3, 3);
    cout << sqrt(36);
    cout << round(4.3);
    cout << round(4.6);
    cout << ceil(4.1);   //it will round the number to the next highest
    cout << floor(4.9);  // it will round the number to the next lowest
    cout << fmax(3, 10);   // it will tell the higher among the following
    cout << fmin(3, 10);  //it will tell the lowee among the following
    return 0;
}
