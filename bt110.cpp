#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max;
    int t,a;
        scanf("%d",&a);
        for(b=0;b<a;b++){
            scanf("%d",&c[b]);
        }
        n=max=-1;
        for(b=0;b<a;b++){
            if(max<c[b]){
                max=c[b];
            }
        } printf("%d ",max);m=max;
        for(b=0;b<a;b++){
            if(n<c[b]){
                if(c[b]!=max)
                {
                n=c[b];
                }
            }
        } printf("%d",n);
    return 0;
}
