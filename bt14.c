#include<stdio.h>
#include<math.h>
main (){
int a,b;
b=0;
scanf("%d",&a);
while(a>0){
	b=b+ (a % 10);
	a=a/10;
} 
printf("%d",b);
return 0;
}