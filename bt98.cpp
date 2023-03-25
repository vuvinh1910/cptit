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
    for(n=0;n<t;n++){
        if(c[n]%2==0){
            printf("%d ",c[n]);
        }
    } printf("\n");
    for(n=0;n<t;n++){
        if(c[n]%2!=0){
            printf("%d ",c[n]);
        }
    } printf("\n");
    return 0;
}