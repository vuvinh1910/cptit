#include <stdio.h>
#include <math.h>
int main(){
	long long int a,b,c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    while(t--){
        scanf("%lld",&a);
        b=a;c=1;
        while(b>=10){
            c=c*10;
            b=b/10;
        }
        d=c;f=0;
        while(d>0){
            e=a/d;
            a=a-e*d;
            if(e==0||e==8||e==9){e=k=0;}
            else {if(e==1){e=1;k=0;}else{k=1;break;}}
            f=f+e*d;
            d=d/10;
        }
        if(k==0&&f!=0){printf("%lld\n",f);} else {printf("INVALID\n");}
    }
    return 0;
}
