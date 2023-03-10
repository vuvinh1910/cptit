#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d%d",&a,&b);
    if (2<=a<=100 && 2<=b<=100){
        c=a-1;
        e=b;
        f=a-1;
        while(b--){
            printf("*");
        } printf("\n");
        while(c--){
            for (d=f;d<a;d++){
                printf("~");
            }
            a=a+1;
            for (i=1;i<=e;i++){
                printf("*");
            }
            printf("\n");
        }
    }
       return 0;
}
