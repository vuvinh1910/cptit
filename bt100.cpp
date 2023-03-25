#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d[100],e,f,g,h,i,k,l,m,n;
    int t,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            scanf("%d",&c[b]);
        }
        n=0;m=0;
        for(b=1;b<=a;b++){
            if(c[b]>=n){
                m++;
                n=c[b];
            }
        }
        printf("%d\n",m);
    }
    return 0;
}