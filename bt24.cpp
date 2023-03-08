#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d",&a);
    i=2;c=1;d=a;
    while (a!=1){
        if (a%i==0){
            c=c+i;
            a=a/i;
        } else {
            i=i+1;
        }
    } if (d==c){printf("1");} else{printf("0");}
    return 0;
}