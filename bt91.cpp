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
            e=c[b];k=1;
            for(f=2;f<=sqrt(e);f++){
                if(e%f==0){k=0;break;}
            }
            if(k==1&&e!=1){
                printf("%d ",c[b]);
            }
        }
        printf("\n");
    }
    return 0;
}