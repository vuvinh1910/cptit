#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,f;
    scanf("%d",&a);
    if (2<=a<=100){
    b=a;
    c=a-1;
    while (b--){
    for (d=1;d<=c;d++){
        printf("~");
    }
    for (i=1;i<=a;i++){
        printf("*");
    } 
    printf("\n");
    }}
       return 0;
}