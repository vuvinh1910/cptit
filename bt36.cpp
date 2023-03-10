#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f,g,h,k;
    scanf("%d",&a);
    if (2<=a<=100){
        b=a;
        e=a;
        f=a;
        i=a-2;
        while(e--){
            for (g=1;g<a;g++){
                printf("~");
            }
            printf("*");
        } printf("\n");
        while(i--){
            for (h=1;h<a-1;h++){
                printf("~");
            }
            h=h-1;
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
