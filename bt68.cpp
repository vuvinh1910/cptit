#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,T;
	scanf("%d%d",&a,&b);
	n=a;m=b;
	i=0;k=0;
	while (a>0){
	c=a%10;
	a=a/10;
	i=i+c;
	}
	while (b>0){
	e=b%10;
	b=b/10;
	k=k+e;
	}
	if (i<=k){
	printf("%d %d",n,m);
	} else printf("%d %d",m,n);
return 0;
}