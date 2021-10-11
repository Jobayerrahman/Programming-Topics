#include<iostream>
using namespace std;

int main(){
    //Identify segment
    string str[100], sentence, words;
    int i=0,counts=0;


    cout<<"Enter the Sentence of string : ";
    getline(cin,sentence);

    //Main Operation segment
    while(i<sentence.size()){
        if( sentence[i] ==' '){
            str[counts++] = words;
            words ="";
        }
        else{
            words +=sentence[i];
        }
        i++;
    }
    str[counts++] = words;

    //Output segment
    for(int j=0; j<=counts; j++){
        if( j !=counts){
         cout<<str[j]<<endl;
        }
    }
    return 0;

}
