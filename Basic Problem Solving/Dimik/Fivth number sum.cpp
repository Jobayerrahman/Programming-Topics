#include<iostream>
using namespace std;

int main(){
    int number,T;
    cin>>T;
    cout<<"Enter the numbers : "<<endl;
    for(int i=0; i<T; i++){
        cin>>number;

        int LSD = number%10;
        int MSD;
        for(int j=0; j<5; j++){
            MSD = number % 10;
            number  = number /10;
        }
        cout<<"Sum = "<<LSD+MSD<<endl;
    }
    return 0;
}
