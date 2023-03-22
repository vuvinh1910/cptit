#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        if(1<b<7){
            c=1;
        while(b--){
            c=c*10;
        }
        for(d=c/10;d<c;d++){
            h=d;
            while(h>0){
                g=1;
                e=h%10;
                h=h/10;
                f=h%10;
                if(f-e>0){g=0;break;}
            }
            if(g==1){printf("%d ",d);}
        } printf("\n");
    }
    }
return 0;
}