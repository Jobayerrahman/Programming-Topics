#include<stdio.h>
#include<stdlib.h>

int main(){
    int T,i;
    scanf("%d",&T);
    while(i<T){
        char line[1000010];
        scanf(" %[^\n]",line);
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
        printf("%d\n",counts);
        i++;
    }
    return 0;
}
