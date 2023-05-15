#include <stdio.h>
main(){
    int a;
    scanf("%d",&a);
    while(a--){
        int b,c,d;
        scanf("%d %d %d",&b,&c,&d);
        int e[101][101];
        for(int i=1;i<=b;i++){
            for(int j=1;j<=c;j++){
                scanf("%d",&e[i][j]);
            }
        }
        int m=1;
        for(int i=1;i<=b;i++){
            int n=e[i][d];
            int k;
            for(int t=m;t<=b;t++){
                if(e[t][d]<n){k=n;n=e[t][d];e[t][d]=k;}
            }
            e[i][d]=n;
            m++;
        }
        for(int i=1;i<=b;i++){
            for(int j=1;j<=c;j++){
                printf("%d ",e[i][j]);
            }
            printf("\n");
        }
    }
}