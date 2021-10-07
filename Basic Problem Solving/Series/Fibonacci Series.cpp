#include<iostream>
using namespace std;

int main()
{
    int t1=0,t2=1,n;
    int nextterm = t1 + t2;

    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<t1<<" "<<t2<<" ";

    for(int i=1;i<n-1;i++){
        cout<<nextterm<<" ";
        t1 = t2;
        t2 = nextterm;
        nextterm = t1+t2;
    }
    return 0;
}
