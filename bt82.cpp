#include <stdio.h>
#include <math.h>
int main(){
	long long int a,b,c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    while(t--){
        scanf("%lld",&a);
        if(a%2==0){
            n=m=0;
            while(a>0){
                b=a%10;
                if(b%2==0){n++;} else {m++;}
                a=a/10;
            }
            if (n>m){printf("YES\n");} else {printf("NO\n");}
        } else {
            printf("NO\n");
        }
    }
return 0;
}