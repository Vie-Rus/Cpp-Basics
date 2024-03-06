#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    //s writes string to stdout
    char name[] = "World";
    printf("String is: %s\n", name);

    //c writes single chatacter to stdout
    char letter = 'M';
    printf("Char is: %c\n", letter);

//SPACING
    printf("String is: %*c\n", 4, letter);

    //d or i transforms signed int to decimal representation
    int i = 5;
    printf("Int is: %d\n",i);

    //f or F floating point into decimal represenation
    double num = 4.2069;
    printf("Double is: %f\n", num);

//ROUNDING
    printf("Double is: %.2f\n", num);

//STRINGF FUNCTION
    printf("Welcome %s, your known character is %*c is this correct?\n\n", name, 2, letter);

//COUT VERSION
    letter = 'A';
    cout << "Char is:" << letter; 

    return 0;
}