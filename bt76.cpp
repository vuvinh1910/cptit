#include <stdio.h>
#include <math.h>
main(){
	int a;
	long long int b,c,d,e,f,g,h,i,k,l,m,n,T;
	scanf("%d",&a);
	while(a--){
	scanf("%lld",&b);
	c=1;d=b;g=0;h=0;i=0;k=b;
	while (b>10){
	c=c*10;
	b=b/10;
	}
	while (d>0){
	h++;
	e=d%10;
	i=i+e;
	f=e*c;
	g=g+f;
	c=c/10;
	d=d/10;
	}
	if(g==k&&h%2!=0&&i%2!=0){printf("YES\n");} else {printf("NO\n");}
	}
return 0;
}