#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f;
    scanf("%d",&a);
    if (2<=a<=100){
        b=a;
        e=a;
        f=a;
        i=a-2;
        while(e--){
            printf("*");
        } printf("\n");
        while(i--){
            printf("*");
            for(d=1;d<=a-2;d++){printf(".");}
            printf("*\n");
        }
        while(f--){
            printf("*");
        } printf("\n");
    }
       return 0;
}
