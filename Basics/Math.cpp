#include <iostream>
//NEED TO INCLUDE for math
#include <cmath>
using namespace std;

int main() {
//Different types of Symbols
    int a = 5;
    int b = 25;

    int sum = a + b;
    int sum2 = a-b;
    int sum3 = a*b;
    int sum4 = a/b;
    int sum5 = a%b;
    int sum6 = ++a;
    int sum7 = --b;
    cout << sum << " " << sum2 << " " << sum3 << " " << sum4 << endl;
    cout << sum5 << " " << sum6 << " " <<sum7 << endl;


    int x = 4;
    double y = 5.5;

//x^y = pow(x,y)
    cout << pow(3,3) << endl;;

//square root of x = sqrt(x)
    cout << sqrt(36) << endl;

//rounds a number
    cout << round(4.6) << endl;

//ceil = rounds up
    cout << ceil(4.1) << endl;

//floor = rounds down
    cout << floor(4.9) << endl;

//fmax which is bigger ()
    cout << fmax(3,8) << endl;

//fmin which is smaller ()
    cout << fmin(2,8) << endl;

    return 0;
}