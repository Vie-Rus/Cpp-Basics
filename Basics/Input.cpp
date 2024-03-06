#include <iostream>
using namespace std;

int main() {
    int num;
    string line;

    cout << "Enter age: " << endl;
    cin >> num;
    cout << "Your age is: " << num << endl;

//get a string of text
    cout << "Enter name: ";
    //getline(cin, line);
    cin >> line;
    cout << "Hello " << line << endl;

    return 0;
}