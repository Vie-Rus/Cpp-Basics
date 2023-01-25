#include <iostream>
using namespace std;
int main(){
    // reference to existing variable with &
    string food = "Pizza";
    string &meal = food; //reference to food
    //pizza is now under the varibles food and meal

    cout << food << endl;
    cout << meal;

    //to get the memory address of variable put & in cout
    cout << &food;

/* this is important to note because they give you the ability to 
manipulate the data in computer memory - which can reduce the code
and improve the performance **/


    return 0;
}