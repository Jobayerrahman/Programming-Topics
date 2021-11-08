#include<iostream>
#include <string>
using namespace std;

int main(){
    int T;
    string num;
    string number[100];
    int result=0;
    cout<<"Enter the amount of number : ";
    cin>>T;
    cout<<"Enter the number : "<<endl;
    for(int i=0; i<T; i++){
        cin>>num;

        for(int j =0; j<5; j++){
            number[j] = num[j];
        }
        int num1 = stoi(number[0]);
        int num2 = stoi(number[4]);
        cout<<"SUM = "<<num1+num2<<endl;
    }
    return 0;
}
