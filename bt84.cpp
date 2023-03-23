#include <stdio.h>
#include <math.h>
int main(){
	int c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    t=t-1;c=t;l=1;
    int a[t],b[t];
    for(d=1;d<=t;d++){
        scanf("%d%d",&a[d],&b[d]);
        if(a[d]!=b[d]){l=0;}
    }
    if(a[1]==a[2]||a[1]==b[2]){n=a[1];}
    if(b[1]==b[2]||b[1]==a[2]){n=a[2];}
    for(d=1;d<=t;d++){
        if(a[d]!=n && b[d]!=n){
            l=1;break;
        }
    }
    if(l==0){printf("Yes\n");} else {printf("No\n");}
return 0;
}