#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max,min;
    int t,a;
        scanf("%d",&a);
        for(b=0;b<a;b++){
            scanf("%d",&c[b]);
        }
        max=c[0];
        for(b=0;b<a;b++){
            if(max<c[b]){
                max=c[b];
            }
        }
        min=c[0];
        for(b=0;b<a;b++){
            if(min>c[b]){
                min=c[b];
            }
        }
        for(min=min;min<=max;min++){
            for(b=0;b<a;b++){
            if(c[b]==min){
                printf("%d ",c[b]);
            }
            }
        }
    return 0;
}