#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g,h,i,k,l,m,n;
    int t,a;
	scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            scanf("%d",&c[b]);
        }
        m=c[1];
        for(b=2;b<=a;b++){
            if(m<c[b]){
                m=c[b];
            }
        }
        printf("%d\n",m);
        for(b=1;b<=a;b++){
            if (c[b]==m){
                printf("%d ",b-1);
            }
        }
        printf("\n");
    }
    return 0;
}
