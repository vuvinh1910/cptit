#include<stdio.h>
#include<math.h>
main(){
	float f,c;
	scanf("%f",&c);
	if (c<=100){
		f=(c * 9 / 5) + 32;
		printf("%0.2f",f);
	}
	return 0;
}
