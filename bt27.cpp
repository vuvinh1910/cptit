#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d",&a);
    b= a%10;
    while(a>=10){
        a=a/10;
    } printf("%d %d",a,b);
    return 0;
}
