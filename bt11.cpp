#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	if (abs(a)<=1000 && abs(b)<=1000 && abs(c)<=1000 && a!=0 && b!=0 && c!=0){
		t=b*b-4*a*c;
		if (t>0){
			printf("%.2lf %.2lf",((double)-b+(double) sqrt(t))/(2*(double)a),((double)-b-(double) sqrt(t))/(2*(double)a));
		} else {
			if(t==0){
				printf("%.2lf",(double)-b/(2*(double)a));
			} else {
				printf("NO");
			}
		}
	}
	return 0;
}
