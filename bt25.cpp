#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e;
    scanf("%d",&a);
    i=0;
        for(c=1;c<a;c++){
        if (a%c==0){
            i=i+c;
        }
    } if(a==i){printf("1");} else {printf("0");}
    return 0;
}
