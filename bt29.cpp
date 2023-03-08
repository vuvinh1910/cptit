#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d,e,chan[100],le[100];
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {chan[i]=0;
     le[i]=0;
    
    scanf("%d",&a);
    while (a>0){
        b=a%10;
        a=a/10;
            if(b%2==0){chan[i]=chan[i]+1;} else {le[i]=le[i]+1;}
    }
    printf("%d %d\n",le[i],chan[i]);}
    return 0;
}