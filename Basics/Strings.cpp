#include <iostream>
using namespace std;

int main() {
    cout << x << "EFG" << endl;

    //Change var name mid code
    x = "ABE";
    cout << x << endl;

    //Change single var mid code
    x[2] = 'C';
    cout << x << endl;

    //Find how many characters find ("letter to find", where to start)
    x = "Hello world how are you";
    cout << x.find("w", 0);

   //substring (index start, grab characters from starting)
    string xSub;
    xSub = x.substr(8,3);
    cout << xSub << endl;
    return 0;
}