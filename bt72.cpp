#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d,e,f,g,h,i,k,l,m,n,t;
	scanf("%d",&i);
    while (i--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if (a==0 || b==0){
            e=a+b;
        }
        while(a!=b){
            if (a>=b){
                a=a-b;
            } else {b=b-a;}
        }
        if (c==0 || d==0){
            f=c+d;
        }
        while(c!=d){
            if (c>=d){
                c=c-d;
            } else {d=d-c;}
        }
        if (b==d || e==f){printf("YES\n");} else {printf("NO\n");}
        
    }
    
return 0;
}