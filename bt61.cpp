#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d,e,f,g,h,i,k,l,m,n;
    scanf("%d%d",&a,&c);
    if (a>c){d=c;c=a;a=d;}
    for (b=a;b<=c;b++){
        if (b==6||b==28||b==496||b==8128||b==33550336||b==8589869056){
            printf("%d ",b);
        }
    }
    return 0;
}