#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d%d",&b,&a);
    if (b>=a){d=b;} else{d=a;}
    c=b-1;
    h=a;
    l=a;
    while(a--){
        printf("%c",96+d);
    } 
    printf("\n");
    while(c--){
        k++;
        printf("%c",96+d);
        i=d;
        for(f=0;f<k;f++){
            i=i-1;
            printf("%c",96+i);
            if (d-i+1==l){break;}
        }
        for(g=1;g<=h-1-k;g++){
            printf("%c",96+i);
        }
        printf("\n");
    }
       return 0;
}

