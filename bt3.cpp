#include<stdio.h>
main(){
	long long b[100],a,i;
	scanf("%d",&a);
	if (a<1000000000){

	for (i=a;i > 0; i=i-1){
		scanf("%lld",&b[i]);
		}
	for (i=a;i > 0; i=i-1){
	printf("%lld\n",b[i]*b[i]);
	}
}
	return 0;
}
