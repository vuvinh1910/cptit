#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k;
    scanf("%d%d",&b,&a);
    if (b>=a){d=b;} else{d=a;}
    h=d;
    while(d--){
        e=d+1;
        if(e>=a){
        printf("%d",e);
        for(c=e-1;c>0;c--){
            printf("%d",c);
            if (e-c+1==a){break;}
        }
        printf("\n");
        } else{
            for (f=e;f>0;f--){
                printf("%d",f);
            }
            for (g=2;g<=a;g++){
                printf("%d",g);
                if (e-1+g==a){
                    break;
                }
            }  printf("\n");
        }
        if(h-e+1==b){break;}
    }
       return 0;
}

