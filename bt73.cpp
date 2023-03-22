#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while(i--){
        scanf("%d%d",&a,&b);
        l=0;
        for(c=a;c<=b;c++){
            d=1;
            f=c;
            for(e=2;e<=sqrt(c);e++){
                if (c%e==0){d=0;break;}
            }
            g=0;
            if(d==1){
                while(f>0){
                    g=1;
                    h=f%10;
                    f=f/10;
                    if(h==1||h==4||h==6||h==8||h==9||h==0){g=0;break;}
                }
            }
            if (g==1){l=l+1;}
        }
        printf("%d\n",l);
    }
return 0;
}