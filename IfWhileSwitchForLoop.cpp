#include <iostream>
using namespace std;

int getMax(int a, int b, int c){
    int total;

    if(a >= b && a >= c){
        total = a;
    } else if (b >= a && b >= c){
        total = b;
    }else {
        total = c;
    }

    return total;
}

string getDayWeek(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
         case 1:
            dayName = "Monday";
            break;
         case 2:
            dayName = "Tuesday";
            break;
         case 3:
            dayName = "Wednesday";
            break;
         case 4:
            dayName = "Thursday";
            break;
         case 5:
            dayName = "Friday";
            break;
         case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }
    return dayName;
}

int main(){

    bool z = false;
    bool y = false;
    int a=1;
    int b=6;
    int c=9;


//if
    if (z && y) {
        cout << "this a z and y";
    } else if (z && !y) {
        cout << "Not y";
    } else if (!z && y) {
        cout << "Not z";
    } else {
        cout << "this isn't z and y";
    }

//if return
    cout << "\n" << getMax(a,b,c);


//SWITCH
    cout << endl;
    cout << getDayWeek(a) << endl;

//WHILE

    while(a<=5){
        cout << a << endl;
        a++;
    }

    cout<< endl;
    //do while takes info from while and
    //puts the Do while(x) stays he same
    do{
        cout << b << endl;
        b++;
    } while(b<=12);


//FOR 


    return 0;
}