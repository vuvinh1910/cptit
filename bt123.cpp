#include <stdio.h>
#include <string.h>
int main() {
    int i,test;
    scanf("%d",&i);
    getchar();
    while(i--){
    char str[505];int d=0;
    test=0;
    fgets(str, sizeof(str), stdin);
    int a=strlen(str)-1;
    for(int b=0;b<a;b++){
        d=d+(int)str[b]-48;
        if(str[b]!=str[a-1-b]){test++;}
        }
    if((int)str[0]==56 && test==0 && d % 10==0){
        printf("YES\n");
    } else {printf("NO\n");}
    }
    return 0;
}