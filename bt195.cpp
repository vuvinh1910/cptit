#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(){
    int a;
    scanf("%d",&a);
    getchar();
    while(a--){
        char b[52];
        char c[52][52]; 
        int i=0;
        gets(b);
        char *tach = strtok(b," ");
        while(tach != NULL){
            strcpy(c[i++],tach);
            tach=strtok(NULL," ");
        }
        for(int d=1; d<i-1; d++){
            c[d][0] = toupper(c[d][0]);
            for(int j=1;j<strlen(c[d]);j++){
                if(islower(c[d][j])==0){
                    c[d][j]=tolower(c[d][j]);
                }
            }
            printf("%s ",c[d]);
        }
        c[i-1][0]=toupper(c[i-1][0]);
        for(int j=1;j<strlen(c[i-1]);j++){
            if(islower(c[i-1][j])==0){
                c[i-1][j]=tolower(c[i-1][j]);
        }
    }
        printf("%s, ",c[i-1]);
        for(int j=0;j<strlen(c[0]);j++){
            c[0][j]=toupper(c[0][j]);
        }
        printf("%s\n",c[0]);
    }
    return 0;
}

