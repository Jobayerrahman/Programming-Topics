#include<iostream>
using namespace std;

int main(){
    string s;
    string s1,s2;
    cout<<"Enter the string : ";
    cin>>s;

    for(int i=0; i<=s.size(); i++){
        if(i%2 == 0){
            s1 +=s[i];
        }
        else{
            s2 +=s[i];
        }
    }
    cout<<s1<<" "<<s2;
    return 0;
}
