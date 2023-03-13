#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k;
    scanf("%d%d",&b,&a);
    d=b-1;
    e=1;
    for (c=1;c<=a;c++){
        printf("%c",64+c);
    } printf("\n");
    while(d--){
        e++;
        if (e>a){printf("%c",64+a);} else {
        printf("%c",64+e);}
        if (e>a){
            for (i=a-1;i>0;i--){
                printf("%c",64+i);
            } printf("\n");
        } else {
        for(f=1;f<=a;f++){
            if(f>e && f<=a){
            printf("%c",64+f);
            }
        }
        h=e;
        for(g=h-1;g>=1;g--){
            printf("%c",64+g);
        } printf("\n");
    }
    }
       return 0;
}