#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c[100],d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        d=a/2;
        for(b=1;b<=a;b++){
            scanf("%d",&c[b]);
        }
        l=1;
        for(e=1;e<=d;e++){
            f=a+1-e;
            if(c[e]!=c[f]){
                l=0;break;
            }
        }
        if(l==1){printf("YES\n");} else {printf("NO\n");}
    }
    return 0;
}