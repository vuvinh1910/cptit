#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,T;
	scanf("%d%d",&a,&b);
	if (a<=1000&&b<=1000){
	if (a<=0){a=1;};if (b<=0){b=1;}
	if (a>=b){k=a;a=b;b=k;}
    for (c=a;c<=b;c++){
        for(d=2;d<=sqrt(c);d++){
            e=0;
            if (c%d==0){e=1;break;}
        }
        if(e==0){
            f=c;h=0;
            while(f>0){
                g=f%10;
                f=f/10;
                h=h+g;
            } n=1;m=1;
            while(i<h){
                i=n+m;
                n=m;m=i;
            }
            if (i==h){printf("%d ",c);}
        } i=0;
    }
	}
return 0;
}