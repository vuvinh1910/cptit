#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n;
    int t;
	scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(b=2;b<=a/2;b++){
            c=a-b;
            n=1;
            for(d=2;d<=sqrt(b);d++){
                if(b%d==0){n=0;break;}
            }
            m=0;
            if(n==1){
                m=1;
                for(e=2;e<=sqrt(c);e++){
                    if(c%e==0){
                        m=0;break;
                    }
                }
            }
            if(m==1){
                printf("%d %d ",b,c);
            }
        }
        printf("\n");
    }
    return 0;
}