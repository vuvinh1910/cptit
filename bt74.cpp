#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d",&a);
        printf("%d = ",a);
        b=2;c=0;
        while(a!=1){
            if(a%b==0){
                a=a/b;
                c++;
                if(a==1){printf("%d^%d\n",b,c);}
            }
            else{
                if(c!=0){
                    printf("%d^%d * ",b,c);
                }
                    b++;;c=0;
                }
        }
    }

return 0;
}