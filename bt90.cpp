#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c[100],d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            scanf("%d",&c[b]);
            e=c[b];
            if(e%2==0){
                printf("%d ",c[b]);
            }
        }
        printf("\n");
    }
    return 0;
}