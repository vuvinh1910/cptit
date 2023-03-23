#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if (-1000 <a<c<1000 && -1000<b<d<1000){
            if(d-b==c-a){printf("YES\n");} else {printf("NO\n");}
        }
    }
return 0;
}