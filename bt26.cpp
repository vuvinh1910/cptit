#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d",&a);
    d=0;e=a;
    while (a!=0){
        b=a%10;
        a=a/10;
        c=1;
        for (i=1;i<=b;i++){c=c*i;
        } d=d+c;
    } if (e==d)
    {
        printf("1");
    } else {printf("0");}
    
    return 0;
}
