#include<stdio.h>
#include<math.h>
main(){
    long int a,b,i,c,d,e,f;
    scanf("%ld",&a);
        while(a--){
            e=1;f=1;
            scanf("%ld",&b);
                while(b>0){
                    c=b%10;
                    b=b/10;
                    d=b%10;
                    i=c-d;
                    e=e*i;
                    if (i<0){
                        f=0;break;
                    }
            }
        if (f==0){
            printf("NO\n");
        } else {
            printf("YES\n");
            }
        }
       return 0;
}