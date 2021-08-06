#include<iostream>
using namespace std;

class Mobile{
public:
    virtual void display()=0;
};

class Rahim:public Mobile{
public:
    void display(){
        cout<<"Hello! This is Rahim."<<endl;
    }
};

class Karim:public Mobile{
public:
    void display(){
        cout<<"Hello! This is Karim."<<endl;
    }
};

int main(){
    Mobile *m;
    Rahim r;
    Karim k;

    m = &r;
    m->display();

    m = &k;
    m->display();

    return 0;
}
