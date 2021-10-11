//Reverse word
#include<iostream>
using namespace std;

int main(){
    string s;
    int counts=0;
    getline(cin,s);
    int leng = s.size();
    for(int i=leng-1; i>=0; i--){
        cout<<s[i];

    }

}
