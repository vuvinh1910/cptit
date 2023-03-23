#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d%d",&a,&b);
        h=0;
        for(c=a;c<=b;c++){
            d=c;g=1;
            while(d>10){
                e=d%10;
                d=d/10;
                f=d%10;
                if(e>=f){g=0;break;}
            }
            if(g==1) {
                h++;
            }
        } printf("%d\n",h);
    }
return 0;
}