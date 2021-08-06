#include<iostream>
using namespace std;

class A {
private:
    int shape=12;
    int area=43;
public:
    friend class B;
};

class B{
public:
    void display(A ob){
        cout<<"Shape is : "<<ob.shape<<endl;
        cout<<"Area is : "<<ob.area<<endl;
    }
};

int main(){
    A ob1;
    B ob2;

    ob2.display(ob1);
    return 0;
}
