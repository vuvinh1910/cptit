#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    float o;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&b,&c);
        g=0;
        for (d=b;d<=c;d++){
            k=d;e=d;o=0.1;m=0;
    while(k>0){
        o=o*10;
        k=k/10;
    }
    while(e>0){
        l=e%10*o;
        m=m+l;
        e=e/10;
        o=o/10;
    }
            if(m==d){
                i=1;
                for(h=2;h<=sqrt(d);h++){
                    if(d%h==0){i=0;break;}
                }
                if(i==1){
                    g++;
                    if(g%10==0){printf("%d\n",d);} else {printf("%d ",d);}
                }
            }
        }
        if(g%10!=0){printf("\n\n");}
    }
    return 0;
}