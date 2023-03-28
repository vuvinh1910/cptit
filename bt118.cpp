#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int a,b,c,d,e,f,g,h;
    char i[200];
    scanf("%d",&a);
    getchar();
    while(a--){
        c=1;
        fgets(i,sizeof(i),stdin);
        for(b=0;b<strlen(i)-2;b++){
            if(i[b]==' '&&i[b+1]!=' '){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
