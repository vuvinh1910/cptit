#include <stdio.h>
#include <math.h>
main(){
	long long int b,c,d,e,f,g,h,i,k,l,m,n,t;
    int a;
	scanf("%d",&a);
    while(a--){
        scanf("%lld",&b);
        if (b%2==0){
            while(b>0){
                c=1;
                b=b/10;
                e=b%10;
                if (e%2!=0){c=0;break;}
            }
            if (c==1){printf("YES\n");}else{printf("NO\n");}
        } else {printf("NO\n");}
    }
return 0;
}