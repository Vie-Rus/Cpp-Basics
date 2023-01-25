#include <iostream>
using namespace std;

class fClass{
    public:
    void meth();
    int test(int &a);
};

void fClass::meth(){
    cout << "Hello broski"<< endl;
}

int fClass::test(int &a){
    return a+7;
}


int main(){
    int b = 4;
    fClass myObj;


    myObj.meth();
    cout << myObj.test(b);
    return 0;
}