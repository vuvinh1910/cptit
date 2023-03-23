#include<stdio.h>
main(){
	int a,b;
	scanf("%d",&a);
	for (int i=a;i > 0; i=i-1){
		scanf("%d",&b);printf("%d\n",b*2);
	}
	return 0;
}
