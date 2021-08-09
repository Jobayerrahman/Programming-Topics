#include<iostream>
using namespace std;


class Student{
private:
    string name;
    string id;
    string roll;

public:
    void setValue(string name, string id, string roll){
        this -> name = name;
        this -> id = id;
        this -> roll = roll;
    }
    string getName(){
     return name;
    }
    string getId(){
     return id;
    }
    string getRoll(){
     return roll;
    }

};
int main(){
    Student S1;

    S1.setValue("Atifur Rahman","101","1001");
    cout<<S1.getName()<<endl;
    cout<<S1.getId()<<endl;
    cout<<S1.getRoll()<<endl;
    return 0;
}
