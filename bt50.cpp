#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d%d",&b,&a);
    if(b>=a){c=a;}else{c=b;}
    d=abs(a-b)+1;
    e=b-d;
    f=0;i=b;
    if (b>=a){
    while(d--){
        for (h=0;h<a;h++){
            printf("%c",64+c);
            }
        printf("\n");
    }
    while(e--){
        f=f+1;
        for(g=a-f;g<a;g++){
            printf("%c",64+g);
        }
        for (h=0;h<=e;h++){
            printf("%c",64+c);
        }
         printf("\n");
        }
    } else {
        l=b;
        g=b;
    while(i--){
        for (h=l;h<a;h++){
            printf("%c",64+h);
        } l--;
        for (k=1;k<=g;k++){
            printf("%c",64+a);
        } g--;
        printf("\n");

    }
}
       return 0;
}