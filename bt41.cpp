#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d",&a);
    if (2<=a<=100){
        c=a-3;
        i=a;
        g=b;
        e=i;
        f=a;
        printf("*\n**\n");
        while(c--){
            printf("*");
            if (i>=c+1){
            for (d=f;d<=a;d++){
                printf(".");
                }
            }
            a=a+1;
            printf("*\n");
        }
        while(e--){
            printf("*");
        } printf("\n");
    }
       return 0;
}

