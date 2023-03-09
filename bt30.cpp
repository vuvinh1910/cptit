#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d;
    scanf("%d",&a);
    if (a<=100){
        while(a--){
            scanf("%d",&b);
            c=0;i=2;
            if(1<=b<=pow(10,9)){
                if (b%2!=0){printf("0\n");}
                else {
                    while (b/2==(float)b/2)
                {
                    c=c+1;
                    b=b/2;
                }
                printf("%d\n",c);
                }
            }
            
        }
    }
       return 0;
        }
    
