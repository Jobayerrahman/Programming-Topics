#include<iostream>
using namespace std;

/*It's the syntax for initializing members of the class and it is valid when using constructors.
It is called initializer list.*/

class Student{
    private:
        int id;
        string name;
    public:
        Student(int id, string name) : id(id),name(name){}   //Initializer list.

        void display()
        {
            cout<<"Student Id: "<<id<<endl;
            cout<<"Student Name: "<<name<<endl;
            cout<<endl;
        }
};

int main(){
    Student s1(101,"Karim");
    Student s2(102,"Rarim");
    Student s3(103,"Maria");
    Student s4(104,"Tania");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}
