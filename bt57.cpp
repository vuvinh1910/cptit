#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d%d",&a,&b);
    if (2<a<b<100){
        for (c=a;c<=b;c++){
            d=c;
            for(e=d+1;e<=b;e++){
                for(f=2;f<=e;f++){
                    g=1;
                    if(c%f==0 && e%f==0){g=0;break;}
                }
                if (g==1){printf("(%d,%d)\n",c,e);}
            }
        }
    }
    return 0;
}
