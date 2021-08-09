#include<iostream>
using namespace std;


class Shape{
public:
    double dim1,dim2;

    Shape(double dim1,double dim2){
        this->dim1 = dim1;
        this->dim2 = dim2;
    }

    virtual double area(){
        return 0;
    }
};

class Rectangle: public Shape{
public:
    Rectangle(double dim1,double dim2)
    :Shape(dim1,dim2)
    {
    }

    double area(){
        return dim1*dim2;
    }
};

class Triangle: public Shape{
public:
    Triangle(double dim1,double dim2)
    :Shape(dim1,dim2)
    {
    }

    double area(){
        return 0.5*dim1*dim2;
    }
};
int main(){

    Shape *s;
    Rectangle R(10,4);
    Triangle T(10,4);

    s = &R;
    cout<<"Rectangle = "<<s->area()<<endl;

    s = &T;
    cout<<"Triangle = "<<s->area()<<endl;

    return 0;
}
