#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d",&a);
        c=0;
        if (a%2==0){c++;}
        for(b=2;b<=sqrt(a);b++){
            if(a%b==0){
                d=a/b;
                if(b%2==0){c++;}
                if(d%2==0){c++;}
                if(b%2==0 && b==d){c=c-1;}
            }
        }
        printf("%d\n",c);
    }

return 0;
}