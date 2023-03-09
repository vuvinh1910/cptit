#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d;
    scanf("%d",&a);
        while(a--){
            scanf("%d",&b);
                if (b%2!=0||b<2){printf("0\n");} else {
                if (b==2){printf("1\n");}
                else {
                    c=1;
                    for (i=2;i<=sqrt(b);i++){
                        if (b%i==0){
                            if (i%2==0){
                                c=c+1;
                                d=b/i;
                                if (d %2==0 && i!=sqrt(b)){c=c+1;}
                            }
                            else {
                                d=b/i;
                                if (d %2==0){c=c+1;}
                            }
                        }
                    } printf("%d\n",c);
                }
            }
        }
       return 0;
        }