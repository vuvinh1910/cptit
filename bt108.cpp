#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max;
    int t,a;
        scanf("%d",&a);
        for(b=0;b<a;b++){
            scanf("%d",&c[b]);
        }
        scanf("%d",&t);
        for(b=t;b<a;b++){
            printf("%d ",c[b]);
        }
        for(b=0;b<t;b++){
            printf("%d ",c[b]);
        }
    return 0;
}