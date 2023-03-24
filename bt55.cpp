#include <stdio.h>
#include <math.h>
int main(){
	long long int a,b,c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    d=2;e=0;
    for(a=d;a<=d;a++){
        d++;
        b=1;
        for(c=2;c<=sqrt(a);c++){
            if(a%c==0){b=0;break;}
        }
        if(b==1){printf("%d\n",a);e=e+1;}
        if(e==t){break;}
    }
    return 0;
}
