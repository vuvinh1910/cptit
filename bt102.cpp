#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g,h,i,k[100],l,m,n;
    int t,a;
    scanf("%d",&t);
    l=t;
    for(a=1;a<=t;a++){
        scanf("%d",&c[a]);
    }
    i=1;g=1;
    for(a=1;a<=t;a++){
        n=c[a];k[a]=1;
        for(b=a+1;b<=t;b++){
            if(n==c[b]&&n!=-1){
                k[a]++;
                c[b]=-1;
            }
        }
    }
    for(a=1;a<=t;a++){
        if(k[a]>1){
            l=l-k[a];
        }
    } printf("%d\n",l);
    for(a=1;a<=t;a++){
    if(k[a]==1&&c[a]!=-1){
            i=0;
            printf("%d ",c[a]);
        }
    }
    if(i==1){printf("0");}
    return 0;
}