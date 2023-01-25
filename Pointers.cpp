#include <iostream>


using namespace std;
int main(){
    // pointer points to the memory address of variable put & in cout
    string food = "Pizza";
    string * ptr = &food;

    cout << food << endl;
    cout << &food << endl;

    cout << "\n" << ptr << endl;


//DEREFERENCE: outputs whats stored in that section of memory
    cout << *ptr << endl;


//MODIFY POINTERS

    * ptr = "Soup";

    cout << "\n" << *ptr << endl;
    cout << ptr << endl;


    return 0;
}