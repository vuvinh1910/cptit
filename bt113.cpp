#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max,min;
    int t,a;
        scanf("%d",&t);
        while(t--){
            scanf("%d",&a);
            for(b=0;b<a;b++){
                scanf("%d",&c[b]);
            }
            for(b=0;b<a;b++){
                g[b]=1;
                for(d=b+1;d<a;d++){
                    if(b==a-1){
                        g[b]=1;break;
                    } else {
                    if(c[b]<=c[d]){
                        g[b]=0;break;
                    }
                    }
                }
            }
            for(b=0;b<a;b++){
                if(g[b]==1){
                    printf("%d ",c[b]);
                }
            } printf("\n");
        }
    return 0;
}