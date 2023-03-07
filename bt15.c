#include<stdio.h>
#include<math.h>
main (){
int a,c,b[100],i;
b[0]=0;
scanf("%d",&c);
for (i=0;i<c;i=i+1){
	scanf("%d",&a);
while(a>0){
	b[i]=b[i]+ (a % 10);
	a=a/10;
} 
printf("%d\n",b[i]);
}
return 0;
}