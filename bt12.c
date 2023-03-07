#include<stdio.h>
#include<math.h>
main(){
	unsigned int a,b[100];
	int i;
	scanf("%u",&a);
	if (1<=a<=9){
		for (i=1;i<=10;i=i+1){
			b[i]=a*i;
		}
	}
	for (i=1;i<=10;i=i+1){
		printf("%d ",b[i]);
	}
	return 0;
}
