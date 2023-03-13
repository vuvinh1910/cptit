#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k;
    scanf("%d%d",&b,&a);
    c=a;
    d=0;
    e=b-1;f=1;
    while(c--){
        d++;
        printf("%c",63+d);
    } printf("\n");
    while(e--){
        f++;
        for(g=f;g<=a;g++){
            printf("%c",63+g);
        }
        if(f>a){
            for (i=1;i<=a;i++){
                printf("%c",63+a);
            } printf("\n");
        } else
        {for(h=2;h<=f;h++){
            printf("%c",63+a);
        } printf("\n");}
    }
       return 0;
}