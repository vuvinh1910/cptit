#include <stdio.h>
#include <string.h>
int main() {
    int i,d;
    scanf("%d",&i);
    getchar();
    while(i--){
    char a[501];
    fgets(a,sizeof(a),stdin);
    int dai=strlen(a);
    int test=0;
    for(int b=0;b<dai-1;b++){
        if(a[b] % 2 != 0){
            test=1;break;
        }
    }
    if(test==1){
        printf("NO\n");
    } else {
        int m=0;
        for(d=0;d<dai-1;d++){
            if(a[d]!=a[dai-2-d]){
                m=1;break;
            }
    }
        if(m==0){printf("YES\n");} else printf("NO\n");
    }
    }
    return 0;
}