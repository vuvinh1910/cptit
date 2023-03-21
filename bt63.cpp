#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n;
	scanf("%d%d",&a,&b);
    if (a>=b){
        l=a;
        a=b;
        b=l;
    }
	for(h=a;h<=b;h++){
	  i=h;
		g=i;f=0;
		while(i>0){
			c=i%10;
				i=i/10;
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