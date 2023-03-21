#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n;
	scanf("%d",&a);
	for(h=1;h<=a;h++){
	  b=h;
		g=b;f=0;
		while(b>0){
			c=b%10;
				b=b/10;
				e=1;
			for(d=1;d<=c;d++){
				e=e*d;
			}
			f=f+e;
	}
	if(g==f){
		printf("%d ",g);
	}	
} 
return 0;
}