#include <cstdio>
#include <iostream>
using namespace std;

class Student {
    public:
        char name[50];
        int id; 
        float gpa;
};

int main() {
    Student stud;
//Name
    cout << "Enter your name: "<< endl;
    cin >> stud.name;

//ID
    cout << "Enter your Student ID: " << endl;
    cin >> stud.id;

//GPA
    cout << "Enter your gpa: " << endl;
    cin >> stud.gpa;

    cout << "Your name is: " << stud.name << endl;
    cout << "Your ID is: " << stud.id << endl;
    cout << "Your GPA is: " << stud.gpa << endl;
    return 0;
}