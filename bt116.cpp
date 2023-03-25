#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max,min;
    int t,a;
        scanf("%d%d",&a,&b);
            for(e=1;e<=b*a;e++){
                scanf("%d",&c[e]);
            }
            l=1;
        for(d=1;d<=b;d++){
            for(e=1;e<=b*a;e++){
                if(e%b==l){
                    printf("%d ",c[e]);
                }
            } printf("\n");
            l++;l=l%b;
        }
    return 0;
}