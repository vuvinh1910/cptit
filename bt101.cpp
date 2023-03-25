#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g,h,i,k,l,m,n;
    int t,a;
    scanf("%d",&t);
    for(a=1;a<=t;a++){
        scanf("%d",&c[a]);
    }
    i=1;
    for(a=1;a<=t;a++){
        n=c[a];k=1;
        for(b=a+1;b<=t;b++){
            if(n==c[b]&&n!=-1){
                k++;
                c[b]=-1;
            }
        }
        if(k>1){
            i=0;
            printf("%d ",c[a]);
        }
    }
    if(i==1){printf("0");}
    return 0;
}