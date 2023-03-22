#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&a);
    d=1;
    for(b=0;b<=a-1;b++){
        for(c=0;c<=d-1;c++){
            if(d>a){break;}
            l=1;n=1;m=1;
            for(e=1;e<=b;e++){l=l*e;}
            for(e=1;e<=c;e++){n=n*e;}
            for(e=1;e<=(b-c);e++){m=m*e;}
            t = l/(n*m);
            printf("%d ",t);
        }
        printf("\n");
        d++;
    }
return 0;
}