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
        d=a/c;
        e=a%10;
        if(e==2*d||d==e*2){
            a=(a-d*c)/10;
            f=a;l=1;h=0;
            c=c/100;
            while(f>0){
                g=f%10;
                h=h+g*c;
                c=c/10;
                f=f/10;
            }
            if(h==a){
                printf("YES\n");
            } else printf("NO\n");
        } else {printf("NO\n");}
    }
    return 0;
}