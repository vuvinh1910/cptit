#include <stdio.h>
#include <string.h>
int main() {
    int i,d,t;
    scanf("%d",&i);
    getchar();
    while(i--){
        char a[501];
        int c=t=0;
        fgets(a,sizeof(a),stdin);
        int dai=strlen(a)-1;
        for(int b=0;b<dai;b++){
            if(a[b]!=a[dai-b-1]){c++;}
        }
        if(c==0){
            for(int b=0;b<(float)dai/2;b++){
                d=(int)a[b]-48;
                t=0;
                if (d!=2 && d!=3 && d!=5 && d!=7){
                    t=1; break;
                }
            }
            if (t==0){printf("YES\n");} else {printf("NO\n");}
        } else {printf("NO\n");}
    }
    return 0;
}