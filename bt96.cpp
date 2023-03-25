#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d[100],e,f,g,h,i,k,l,m,n;
    int t,a;
	scanf("%d%d",&t,&a);
    for(b=0;b<t;b++){
        scanf("%d",&c[b]);
    }
    for(b=0;b<a;b++){
        scanf("%d",&d[b]);
    }
    scanf("%d",&e);
    if(e>=t){
        for(b=0;b<t;b++){
        printf("%d ",c[b]);
    }
    for(b=0;b<e-t;b++){
        printf("1 ");
    }
    for(b=0;b<a;b++){
        printf("%d ",d[b]);
    }
    } else {
    for(b=0;b<t;b++){
        if(b==e){
            for(f=0;f<a;f++){
                printf("%d ",d[f]);
            }
        }
        printf("%d ",c[b]);
    }
    }
    return 0;
}
