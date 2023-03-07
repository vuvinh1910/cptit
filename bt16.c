#include<stdio.h>
#include<math.h>
main (){
    int a,b,c,i,e;
    scanf("%d",&a);
    for (i=0;i<a;i++){
        scanf("%d",&b);
        if(b<=1){ printf("NO\n");} else {
        e=1;
        c=1;
        if ( b==3 || b==5 || b==7 || b==2) {
            printf("YES\n");
        } else{
        	if ( b==4 || b==6 || b==8 || b==9){
        		printf("NO\n");
		} else{
			while(c<=9){
				c=c+1;
           		e=e*(b%c);
		} if (e==0){
			printf("NO\n");
		} else {
			printf("YES\n");
		}
		}
        }
    }
    }
    return 0;
}