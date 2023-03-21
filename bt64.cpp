#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n;
	scanf("%d",&a);
    c=0;d=1;b=0;
    while (b<a){
        b=c+d;
        c=d;d=b;
    }
    if (b==a){printf("1");}else{printf("0");}
return 0;
}