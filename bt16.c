#include<stdio.h>
#include<math.h>
main (){
    int a,b,c,d,i;
    scanf("%d",&c);
    for (i=0;i<c;i++){
    scanf("%d",&a);
    b =a % 10;
	while(a>=10){
    	d=a;
    	d=d/10;
    	a=d;
	}
	if (b==a){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
return 0;
}
