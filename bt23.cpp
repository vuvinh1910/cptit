#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d",&a);
    e=a;
    c=0;
    i= a % 10;
    while(e>10){
        c++;
        e=e/10;
    } d= a+(i-e)*pow(10,c)-i+e;
    printf("%d",d);
    return 0;
}
