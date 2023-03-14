#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d",&a);
    b=a-1;e=0;c=b;
    while(a--){
        for (d=0;d<=a;d++){e++;}
        for (d=0;d<=a;d++){
        c++;
        f=a+e;
        printf("%c",63+c);
        if(f==c) {printf("\n");
        c=c-a-2;e=0;
        }
    }
    }
       return 0;
}