#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d",&a);
    b=-1;e=a;
    while(a--){
        b=b+2;
        for (d=0;d<=a;d++){
        c=b+d*2;
        printf("%c",64+c);
        if(c==1+(e-1)*2){
            printf("\n");
        }
    }
    }
       return 0;
}