#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max,min;
    int t,a;
        scanf("%d",&a);
        for(b=0;b<a;b++){
            scanf("%d",&c[b]);
        }
        for(b=0;b<a;b++){
            k[b]=1;
            for(d=b+1;d<a;d++){
                if(c[b]==c[d]&&g[b]!=-1){
                    g[d]=-1;k[b]++;
                }
            }
        } m=0;
        for(b=0;b<a;b++){
            if(g[b]!=-1 && k[b]>1){
            m++;
            }
        } printf("%d\n",m);
        for(b=0;b<a;b++){
            if(g[b]!=-1 && k[b]>1){
            printf("%d ",c[b]);
            }
        }
    return 0;
}