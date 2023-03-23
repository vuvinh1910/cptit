#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,d;
	scanf("%d",&a);
	b=a/365;c=(a-365*b)/7;d=a-365*b-7*c;
	if (a<=1000){
	printf("%d ",b);
	printf("%d ",c);
	printf("%d ",d);
	}
	return 0;
}
