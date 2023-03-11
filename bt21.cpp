#include<stdio.h>
#include<math.h>
main(){
    int a,i;
    scanf("%d",&a);
    i=1;
    while (a>0)
    {
       i=i*(a % 10);
       a=a/10;
    }
    printf("%d\n",i);
    
    return 0;
}
