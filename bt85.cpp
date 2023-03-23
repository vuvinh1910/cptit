#include <stdio.h>
#include <math.h>
int main(){
	long long int a,b,c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    if(1<=t<=100){
    while(t--){
        scanf("%lld%lld",&a,&b);
        if(1<=a,b<=1000000000000){
        g=0;
        if (a>b){
            d=a;a=b;b=d;
        }
        for(c=2;c<=sqrt(b);c++){
            f=1;
            for(e=2;e<=sqrt(c);e++){
                if(c%e==0){f=0;break;}
            }
            if(f==1){g++;}
        }
            printf("%d\n",g);
        }
    }
}
    return 0;
}