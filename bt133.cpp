#include <stdio.h>
#include <stdlib.h>
int main() {
    int m, n, p, q;
    scanf("%d",&m);
        for(int j=0;j<m;j++){
            for(int t=0;t<=j;t++){
                printf("%d ",0);
            } n=0;
            for(int t=1;t<m-j;t++){
                n++;
                printf("%d ",n);
            }
            printf("\n");
        }
    return 0;
}