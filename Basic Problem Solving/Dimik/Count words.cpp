#include<iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin>>T;
    string s;
    cin.ignore();
    int counts=0;
    while(T--)
    {
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                counts++;
            }
        }
        cout<<"Count = "<<counts+1<<endl;
        counts = 0;
    }
    return 0;
}
