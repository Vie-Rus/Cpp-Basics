#include <iostream>
using namespace std;


class Student{
    int grade;
    public:
        void setGrade(int g){
            grade = g;
        }
        int getGrade(){
            return grade;
        }
};

int main() {
    Student myObj;


    myObj.setGrade(60);


    cout << myObj.getGrade();

    return 0;
}