#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d",&a);
    if (2<=a<=100){
        c=a;
        g=b;
        e=b-2;
        f=a;
        while(c--){
            for (d=f;d<a;d++){
                printf("*");
            }
            a=a+1;
            printf("*\n");
        }
    }
       return 0;
}

