#include<stdio.h>
#include<math.h>
main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if (b==0){
		printf("%d",b);
	} else {
		printf("%d ",a+b);
		printf("%d ",a-b);
		printf("%d ",a*b);
		printf("%.2f ",(float)a/b);
		printf("%d ", a % b);
	}
	return 0;
}