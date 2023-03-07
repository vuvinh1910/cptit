#include<stdio.h>
#include<math.h>
main (){
int a,b[100],i;
scanf("%d",&a);
if(a<1000000000){
	for (i=0;i<a;i=i+1){
		scanf("%d",&b[i]);
        if (pow((int)sqrt(b[i]),2) == b[i]){
			printf("YES\n");} else {printf("NO\n");}
	}
}
return 0;
}