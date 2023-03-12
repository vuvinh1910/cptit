#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k;
    scanf("%d%d",&b,&a);
    d=b-1;
    e=1;
    h=a;
    for (c=1;c<=a;c++){
        printf("%d",c);
    } printf("\n");
    while(d--){
        e++;
        printf("%d",e);
        if (e>=a){
            for (i=e-1;i>0;i--){
                printf("%d",i);
                if (e-i+1==a){
                    break;
                }
            } printf("\n");
        } else {
        for(f=e-1;f>=1;f--){
            printf("%d",f);
        }
        for (k=2;k<a;k++){
            printf("%d",k);
            if (e+k==a+1){
                break;
            }
        } printf("\n");
    }
    }
       return 0;
}

