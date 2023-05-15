#include<stdio.h>
#include<ctype.h>
#include<string.h>
main(){
    int i=0;int j=0;
    char a[100];
    scanf("%d",&i);
    getchar();
    while(i--){
        gets(a);
        for(int b=0;b<strlen(a);b++){
            if(a[b]=='0' || a[b]=='1' || a[b]=='2'){
                j=1;
            } else {j=0;break;}
        }
        if (j==0){ printf("NO\n");}
    else { printf("YES\n");}
    }
}
