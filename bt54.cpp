#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d",&a);
    if (a>2){
        printf("2\n");
    }
    for(i=3;i<a;i=i+2){
        if((int)sqrt(i)<=2){printf("%d\n",i);} 
        else {
        for (b=2;b<=(int)sqrt(i);b++){
            if (i%b==0){
                    c=0;
                    break;
                } else {c=1;}
        }
        if (c==1){printf("%d\n",i);}
        }
    }
       return 0;
}