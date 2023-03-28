#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int a,b,c,d,e,f,g,h;
    char i[200];
        c=d=e=0;
        fgets(i,sizeof(i),stdin);
        for(b=0;b<strlen(i)-1;b++){
            if(97<= int(i[b]) <=122){
                c++;
            } else {
                if(48<=i[b]<=57){
                    d++;
                } else {
                    e++;
                }
            }
        }
        printf("%d %d %d\n",c,d,e);
    return 0;
}