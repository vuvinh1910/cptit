#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d,e,f[100],g,h,i,k,l,m,n;
    scanf("%d",&a);
    h=0;
    while(a--){
        h++;
        scanf("%d",&b);
        c=2;f[a]=0;
        printf("Test %d:",h);
        while(b>1){
            if(b%c==0){
                b=b/c;
                g=b*c;
                d=1;
                for (e=2;e<=sqrt(c);e++){
                    if (c%e==0){d=0;break;}
                }
                f[a]++;
                if (b==1){printf(" %d(%d)\n",c,f[a]);}
            } else {
                if (d==1 && g%c==0){
                printf(" %d(%d)",c,f[a]);}
                c++;f[a]=0;
            }
        }
    }
    return 0;
}