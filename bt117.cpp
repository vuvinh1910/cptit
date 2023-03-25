#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g,h,i,k[100],l,m,n,max,min;
    int t,a;
    scanf("%d",&t);
    for(h=1;h<=t;h++){
        scanf("%d%d",&a,&b);
            for(e=1;e<=b*a;e++){
                scanf("%d",&c[e]);
            }
        printf("Test %d:\n",h);
        for(e=1;e<=b*a;e++){
            k[e]=1;
            if(e<=b || e%b==1){
                k[e]=-1;
            }
        }
            for(e=1;e<=b*a;e++){
                if(k[e]!=-1){
                    printf("%d ",c[e]);
                    if(e%b==0){
                        printf("\n");
                    }
                }
            }
    }
    return 0;
}