#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d[100],e,f,g,h,i,k,l,m,n;
    scanf("%d",&a);
    while(a--){
        d[a]=0;
        scanf("%d",&b);
        while(b>0){
            c=b %10;
            d[a]=d[a]+c;
            b=b/10;
        }
        if (d[a]%10==0){printf("YES\n");} else {printf("NO\n");}
    }

       return 0;
}