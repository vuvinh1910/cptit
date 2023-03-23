#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&t);
    for(n=1;n<=t;n++){
        scanf("%d",&a);
        if(1<a<7){
        c=pow(10,a);
        d=pow(10,a-1);
        for(e=d;e<c;e++){
            f=e;
            g=d;k=l=0;
            while(f>0){
                h=f%10;
                if(h==4){break;}
                l=l+h;
                i=h*g;
                k=k+i;
                g=g/10;
                f=f/10;
            }
            if(k==e && l%10==0){printf("%d ",e);}
        } printf("\n");}
    }
return 0;
}