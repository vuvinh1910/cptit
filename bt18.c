#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,i;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&b,&c);
        if (b>=c){
            for (i=1;i<= c;i++){
                if (b%i==0 && c%i==0){
                    d=0+i;
                }
            } printf("%d\n",d);
        } else {
            for (i=1;i<= b;i++){
                if (b%i==0 && c%i==0){
                    d=0+i;
                }
            } printf("%d\n",d);
        }
    }
    return 0;
}