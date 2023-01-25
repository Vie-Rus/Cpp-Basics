#include <iostream>

using namespace std;

void sayHello(string name, int age) {
    cout << "Hello "<< name  << " Age " << age << endl;
}


double cube(double age){
    double result = age * age *age;

    return result;
    //or return age*age*age;
}

int main(){
    string name;
    int age;

   

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    sayHello(name, age);

    double total = cube(age);
    cout << total << endl;
    //or you could do
    cout << cube(age);

    



    return 0;
}