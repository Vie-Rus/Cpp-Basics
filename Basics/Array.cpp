#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string letter[4] = {"AZ", "BZ", "CZ", "DZ"};
    int num[] = {9, 8, 7, 26, 4};
    
    cout << letter[1] << endl;
    letter[1] = "ZZ";
    cout << letter[1] << "\n"<< endl;

    for(int i = 0; i < 4; i++) {
       // cout << letter[i] << endl;
        cout << i << " : " << letter[i] << endl;
    }
    cout << num[4] << endl;
    return 0;
}