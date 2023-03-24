#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g,h,i,k,l,m,n;
    int t,a;
	scanf("%d",&t);
    for(a=1;a<=t;a++){
        scanf("%d",&c[a]);
    }
    for(b=t;b>=1;b--){
        printf("%d ",c[b]);
    }
    return 0;
}