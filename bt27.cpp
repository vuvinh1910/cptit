#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    int chan=0;
    int le=0;
    scanf("%d",&a);
    while (a>0){
        b=a%10;
        a=a/10;
            if(b%2==0){chan=chan+1;} else {le=le+1;}
    }printf("%d %d",le,chan);
    return 0;
}