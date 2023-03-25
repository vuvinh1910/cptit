#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d[100],e,f,g,h,i,k,l,m,n;
    int t,a;
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
    scanf("%d%d%d",&f,&g,&h);
    for(b=0;b<f;b++){
        scanf("%d",&c[b]);
    }
    for(b=0;b<g;b++){
        scanf("%d",&d[b]);
    }
    if(h>=f){
        printf("Test %d:\n",n);
        for(b=0;b<f;b++){
        printf("%d ",c[b]);
    }
        for(b=0;b<g;b++){
        printf("%d ",d[b]);
    }
    printf("\n");
    } else {
        printf("Test %d:\n",n);
        for(b=0;b<f;b++){
            if(b==h){
                for(e=0;e<g;e++){
                    printf("%d ",d[e]);
                }
            }
            printf("%d ",c[b]);
        }
        printf("\n");
    }
    }
    
    return 0;
}