#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d[100],e,f,g,h,i,k,l,m,n;
    int t,a;
    scanf("%d",&t);
    for(n=0;n<t;n++)
    {
    scanf("%d",&c[n]);
    }
    n=m=c[0];
    for(n=0;n<t;n++){
        if(m>c[n]){
            m=c[n];
        }
        if(n<c[n]){
            n=c[n];
        }
    } printf("%d ",m);
    l=n;
    for(n=0;n<t;n++){
        if(c[n]!=m){
            if(l>c[n]){
                l=c[n];
            }
        }
    } printf("%d\n",l);
    return 0;
}
