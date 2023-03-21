#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n;
	scanf("%d",&a);
    c=0;d=1;b=0;
    e=a-2;
    printf("%d %d ",c,d);
    while (e--){
        b=c+d;
        c=d;d=b;
        printf("%d ",b);
    }
return 0;
}