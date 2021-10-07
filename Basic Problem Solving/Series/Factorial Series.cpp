#include<iostream>
using namespace std;

int main()
{
    long f=1;
    int i,num,min,max;

    cout<<"Enter the min number : ";
    cin>>min;
    cout<<endl;

    cout<<"Enter the max number : ";
    cin>>max;
    cout<<endl;

    cout<<"Factorial Series in given range : ";
    for(num=min; num<=max; num++){
        f=1;
        for(int i=1; i<=num; i++){
            f = f*i;
        }
        cout<<f<<" ";
    }
    return 0;
}
