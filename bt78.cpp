#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    if(i>0){
    b=0;c=i;d=2;e=0;
    while(i>0){
        a=i%10;
        b=b+a;
        i=i/10;
    }
    while(c!=1){
        if(c%d==0){
            c=c/d;
            g=d;
            if(g<10){
                e=e+d;
                } else {
                    while(g>0){
                        f=g%10;
                        e=e+f;
                        g=g/10;
                    }
            }
        }
        else {d++;}
    }
    if (b==e){printf("YES\n");} else printf("NO\n");
    }
    else {printf("NO\n");}
return 0;
}