#include <iostream>
using namespace std;
int main()
{
    string s,r,str[100];
    int counts,i,j=0;
    getline(cin,s);
    for(i=0; i<s.size(); i++){
        if(s[i] == ' '){
            counts++;
        }
    }
    int word = 0;
    while(j<s.size()){
        if(s[j] == ' '){
             str[word] =r;
             r = "";
             word++;
        }
        else{
            r +=s[j];
        }
        j++;
    }
    str[word++] = r;
    string sentence;
    for(int x=counts; x>=0; x--){
        sentence +=str[x];
            if( x!=0 ){
                sentence += ' ';
            }
    }
    cout<<sentence;
    return 0;
}
