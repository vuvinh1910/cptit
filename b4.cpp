#include<stdio.h>
main (){
	int a,i;
	double b;
	scanf("%d",&a);
	for (i=a;i > 0; i=i-1){
		scanf("%lf",&b);printf("%.15lf\n",1/b);
	}
	return 0;
}
