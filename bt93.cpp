#include <stdio.h>
#include <math.h>
int main(){
	long long int b,c[92],d,e,f,g,h,i,k,l,m,n;
    int t,a;
	scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            if(b<=2){
                c[b]=1;
            }
            if (b>2){
                c[b]=c[b-1]+c[b-2];
            }
        }
        b=b-1;
        if(b>0){printf("%lld\n",c[b]);} else {printf("0\n");}
    }
}