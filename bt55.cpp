#include <stdio.h>
#include <math.h>

int main() {
    int N,i;
    scanf("%d", &N);
    int count = 0;
    long long int num = 3;
    if(N>=1){printf("2\n");}
    while (count < N-1) {
        int is_prime = 1;
        
        for ( i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime==1) {
            printf("%lld\n", num);
            count++;
        }
        
        num=num+2;
    }
    
    //printf("\n");
    return 0;
}