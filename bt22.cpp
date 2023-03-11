#include<stdio.h>
#include<math.h>
main(){
    int a,b,i,c,d;
    scanf("%d%d",&a,&b);
    d=0;
    if (a<=b){
        for (i=a;i<=b;i++){
        c=i;d+=c;} printf("%d",d);
    } else {
        for (i=b;i<=a;i++){
        c=i;d+=c;} printf("%d",d);
    }
    return 0;
}
