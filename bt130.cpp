#include<stdio.h>
#include<ctype.h>
#include<string.h>
main(){
    int i;
    char a[100],g[100][100],j;
    scanf("%d",&i);
    getchar();
    while(i--){
        gets(a);
        int j=1;
        for(int b=0;b<strlen(a);b++){
            if(g[b][i]!=':'){
            for(int c=b+1;c<strlen(a);c++){
                if(a[b]==a[c]&&g[c][i]!=':'){
                    j++;
                    g[c][i]=':';
                }
            }
            printf("%c%d",a[b],j);}
            j=1;
        }
        printf("\n");
    }
}

