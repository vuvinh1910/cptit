#include <stdio.h>
#include <math.h>
int main(){
	int b,c[100],d,e,f,g[100],h,i,k[100],l,m,n,max;
    int t,a;
    scanf("%d",&d);
    for (h=1;h<=d;h++){
    scanf("%d",&t);
    l=t;
    for(a=1;a<=t;a++){
        scanf("%d",&c[a]);
    }
    max=c[1];
    for(a=1;a<=t;a++){
        if(max<c[a]){
            max=c[a];
        }
    }
    i=1;
    for(a=1;a<=t;a++){
        n=c[a];k[a]=1;g[a]=1;
        if(n>1){
        for(b=2;b<=sqrt(n);b++){
            if (n%b==0){
                g[a]=0;break;
            }
        }} else {g[a]=0;}
        for(b=a+1;b<=t;b++){
            if(n==c[b]&&n!=-1){
                k[a]++;
                c[b]=-1;
            }
        }
    } printf("Test %d:\n",h);
    for(e=2;e<=max;e++){
        for(a=1;a<=t;a++){
            if(c[a]!=-1&&g[a]==1&&c[a]==e){
            i=0;
            printf("%d xuat hien %d lan\n",c[a],k[a]);
        }
        }
    }
    if(i==1){printf("0");}
    }
    return 0;
}