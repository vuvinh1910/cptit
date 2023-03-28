#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int a,b,c,d,e,f,g[100],h,l,m,n;
    char i[100],q[100];
        fgets(i,sizeof(i),stdin);
        fgets(q,sizeof(q),stdin);
        b=0;c=1;n=strlen(i)-2;
        for(a=0,d=0;a<=strlen(i)-2;a++){
            g[a]=0;
        }
        for(a=0;a<=strlen(i)-2;a++){
            if(i[a]==q[b]){
                if(b==strlen(q)-2){
                    g[a]=-1;c=0;
                }
                b++;
            } else {b=0;}
        } l=strlen(q)-2;
        if(c==0){
            for(a=0,d=0;a<=strlen(i)-2;a++){
                if(g[a]==-1){
                    for(n=a;n>=a-l;n--){
                        g[n]=-1;
                    }
                }
            }
            for(a=0,d=0;a<=strlen(i)-2;a++){
                if(g[a]!=-1){
                    i[d]=i[a];
                    d++;
                }
            }
            i[d]='\0';
            printf("%s\n", i);
        } else {
            printf("%s",i);
        }
}