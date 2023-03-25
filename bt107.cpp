#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max;
    int t,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            scanf("%d",&c[b]);
        } d=0;
        for(b=1;b<a;b++){
            if(c[b]==c[b+1]){
                d++;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}