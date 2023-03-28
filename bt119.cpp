#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int a,b,c,d,e,f,g,h;
    char i[200];
        c=d=e=0;
        fgets(i,sizeof(i),stdin);
        for(b=0;b<strlen(i)-1;b++){
			if(isalpha(i[b])){
			    c++;
			} else {
			    if(isdigit(i[b])){
			        d++;
			    } else {
			        e++;
			    }
			}
		}
		printf("%d %d %d\n",c,d,e);
}
