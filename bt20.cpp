#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,i;
	scanf("%d%d",&a,&b);
	if (b>a){
	if (a==pow((int)sqrt(a),2)){printf("%d\n",(int)sqrt(b)-(int)sqrt(a)+1);
	for (c=(int)sqrt(a);c<=(int)sqrt(b);c++){printf("%d\n",(int)pow(c,2));}
	} 
	else {printf("%d\n", (int)sqrt(b)-(int)sqrt(a));
	for (c=(int)sqrt(a)+1;c<=(int)sqrt(b);c++){printf("%d\n",(int)pow(c,2));}
	}
	
	}
	return 0;
}