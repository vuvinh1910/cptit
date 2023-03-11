#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d%d",&a,&b);
    if (2<=a<=100 && 2<=b<=100){
        c=a-2;
        g=b;
        e=b-2;
        f=a-1;
        while(b--){
            printf("*");
        } printf("\n");
        while(c--){
            for (d=f;d<a;d++){
                printf("~");
            }
            a=a+1;
            printf("*");
            for (i=1;i<=e;i++){
                printf(".");
            }
            printf("*\n");
        }
        for (d=f;d<a;d++){
            printf("~");
        }
        while(g--){
            printf("*");
        } printf("\n");
    }
       return 0;
}

