#include<iostream>
using namespace std;

class Messenger{
    public:
        virtual void display()=0;           //pure virtual class.
};

class Rahim:public Messenger{
    public:
        void display(){
            cout<<"Hello! This is Rahim."<<endl;
        }
};

class Karim:public Messenger{
    public:
        void display(){
            cout<<"Hello! This is Karim."<<endl;
        }
};

int main(){
    Messenger *mes;
    Rahim r;
    Karim k;

    mes = &r;
    mes->display();

    mes = &k;
    mes->display();

    return 0;
}
