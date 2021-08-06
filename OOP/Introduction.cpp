#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        int roll;

        Student(){

        }
        ~Student(){
            cout<<"All data Destroyed"<<endl;
        }
        Student(int x,int y){
            id= x;
            roll= y;
        }
        void display(){
            cout<<" Id is : "<<id<<" "<<" Roll is : "<<roll<<endl;
        }

        void setValues(int x, int y){
            id= x;
            roll= y;
        }
} ;
int main(){
    Student Rahim;
    Student Karim;
    Student Jorina;
    Student Mahin(104,1024);
    Student Anis;

    Rahim.id=101;
    Rahim.roll=1021;
    cout<<" Id is : "<<Rahim.id<<" "<<" Roll is : "<<Rahim.roll<<endl;

    Karim.id=102;
    Karim.roll=1022;
    Karim.display();

    Jorina.setValues(103,1023);
    Jorina.display();

    Mahin.display();

    Student *anis =&Anis;
    anis->id=105;
    anis->roll=1025;
    anis->display();

    return 0;
}
