
#include <iostream>
using namespace std;

int main() {

//variables
    int i =0;
    string x = "ABC";
    int num;
    string line;
    float flo = 1.23;
    double dou = 9.876;
    char letter = 'L';
    bool boolean = true;
    
//INPUT
//     cin >> num;
//     cin >> line;
//     cout << "Enter a number: " << num;
//     cout << "Enter line: " << line;
//    // cout << "Enter number then letter " << num << " " << line << endl23;

//STRING
//     cout << x << "EFG" << endl;

//     //Change var name mid code
//     x = "ABE";
//     cout << x << endl;

//     //Change single var mid code
//     x[2] = 'C';
//     cout<< x << endl;

//     //Find how many characters find ("letter to find", where to start)
//     x = "Hello world how are you";
//     cout << x.find("w", 0);

//     //substring (index start, grab characters from starting)
//     string xSub;
//     xSub = x.substr(8,3);
//     cout << xSub << endl;


//NUMBERS
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



//WHILE LOOP
//     while (i <6) {
//         cout << i << " "<< x << endl;
//         i++;
//     } //test of comments
    return 0;
 }