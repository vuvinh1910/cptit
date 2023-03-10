#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,d,e;
		scanf("%d%d%d",&a,&b,&c);
		if (a<=b && a<=c){
			printf("%d",a);
			} else {if(b<=a && b<=c){
				printf("%d",b);
				} else {
					printf("%d",c);
					}
			}
		return 0;
	}