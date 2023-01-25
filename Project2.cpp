#include <cstdio>
#include <iostream>
using namespace std;


class Student{
    public:
        char name[50];
        int avgScore =0, score =0; 
        int tScore =0;

        void addQuiz(int score){
            avgScore += score;
            tScore++;
        }

        int tScore(){
            return avgScore;
        }

        double avgScore(){
            return avgScore/tScore;
        }


};

int main() {
    Student stud;

    cout << "Enter your name: "<< endl;
    cin >> stud.name;

    cout << "Enter your scores: " << endl;
    cin >> score[10];
    stud.addQuiz(score);


    cout << "Your name is: " << stud.getName << endl;


    return 0;
}