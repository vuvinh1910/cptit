#include <stdio.h>
#include <math.h>
main(){
	unsigned long long int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%lld",&i);
    b=c=d=e=0;
    while(i>0){
        a=i%10;
        i=i/10;
        if(a==2){b++;}
        if(a==3){c++;}
        if(a==5){d++;}
        if(a==7){e++;}
    }
    if(b!=0){printf("2 %d\n",b);}
    if(c!=0){printf("3 %d\n",c);}
    if(d!=0){printf("5 %d\n",d);}
    if(e!=0){printf("7 %d\n",e);}
return 0;
}