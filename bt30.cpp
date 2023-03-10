#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d%d",&a,&b);
    d=a;
    a=a-1;
    c=a;
    b=b-2;
    while (a--){printf("*");}
    printf("*\n");
    while(b--){
        printf("*");
            for(i=2;i<=c;i++){
                printf(" ");
            } printf("*\n");
            }
    while (d--){printf("*");}
       return 0;
        }
    
