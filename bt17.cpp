#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d",&a);
        b=1;
        for(c=2;c<=sqrt(a);c++){
            if(a%c==0){b=0;break;}
        }
        if (b==1){printf("YES\n");}
        else {printf("NO\n");}
    }
return 0;
}