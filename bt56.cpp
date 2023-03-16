#include <stdio.h>
#include <math.h>

int main() {
    long long int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%lld%lld",&a,&b);
    f=1;
    if (b>=a){
        for(c=1;c<=a;c++){
            if (a%c==0 && b%c==0){
                d=c;
            }
            if (b*c%a==0 && f==1){
                e=c*b;
                f=0;
            }
        }
    } else {
        for(c=1;c<=b;c++){
            if (a%c==0 && b%c==0){
                d=c;
            }
            if (a*c%b==0 && f==1){
                e=c*a;
                f=0;
            }
        }
    } printf("%lld\n%lld",d,e);
    return 0;
}