#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    char line[1000010];
    cin.getline(line, 1000010);
    char *p, *e;
    long input;
    int counts=0;
    p = line;

    for(p=line; ;p=e){
        input = strtol(p, &e, 10);
        if( p == e){
            break;
        }
        counts++;
    }
    cout<<counts;
    return 0;
}
