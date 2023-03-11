#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d",&a);
    if (2<=a<=100){
        b=a-1;
        d=a-1;
        e=a;
        f=a;
        while(b--){
            for(c=d;c>0;c--){
                printf("~");
            }
            d=d-1;
            for(i=a;i<=e;i++){
                printf("*");
            }
            e=e+1;
            printf("\n");
        }
        while(f--){
            printf("*");
        } printf("\n");
    }
       return 0;
}

