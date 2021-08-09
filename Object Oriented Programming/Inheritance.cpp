#include<iostream>
using namespace std;

class Parent{
public:
    int area;
    int shape;
    void display(){
        cout<<"Area : "<<area<<" "<<"Shape : "<<shape<<endl;
    }
};
class Child: public Parent{
public:
    void display(){
        cout<<"Area : "<<area<<" "<<"Shape : "<<shape<<endl;
    }
};
int main(){
    Parent P1;
    Child B1;

    P1.area=1001;
    P1.shape=11;
    P1.display();

    B1.area=1011;
    B1.shape=12;
    B1.display();
    return 0;
}
