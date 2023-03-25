#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max;
    int t,a;
    scanf("%d",&t);
    for(a=1;a<=t;a++){
        scanf("%d",&c[a]);
    }
    i=1;
    for(a=1;a<=t;a++){
        n=c[a];k[a]=1;g[a]=1;
        if(n>1){
        for(b=2;b<=sqrt(n);b++){
            if (n%b==0){
                g[a]=0;break;
            }
        }
        } else {g[a]=0;}
        for(b=a+1;b<=t;b++){
            if(n==c[b]&&n!=-1){
                k[a]++;
            }
        }
    }
    l=0;
    for(a=1;a<=t;a++){
        if(g[a]==1){
            l++;
        }
    }
    printf("%d ",l);
        for(a=1;a<=t;a++){
            if(c[a]!=-1&&g[a]==1){
            i=0;
            printf("%d ",c[a]);
        }
    }
    return 0;
}