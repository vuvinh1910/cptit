#include<stdio.h>
#include<math.h>
main(){
    int a,b,i;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        i=2;
        while (b!=1){
            if (b % i == 0) {
                printf("%d",i);
                if (b!=i){printf(" ");} else {printf("\n");}
                b=b/i;
            } else {i++;}
        }
    }
    return 0;
}