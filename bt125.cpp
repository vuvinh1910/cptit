#include <stdio.h>
#include <string.h>
int main() {
    char a[1000000];
    gets(a,sizeof(a),stdin);
    printf("%d",strlen(a)-2);
    return 0;
}