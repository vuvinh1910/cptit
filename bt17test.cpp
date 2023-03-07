#include <stdio.h>
 #include <math.h>
  int kiemtraSNT(int x){ if(x<2) return 0; for(int i=2;i<=sqrt(x);i++){ if(x%i==0) return 0; } return 1; } int main(){ int n,t; scanf("%d",&t); while(t--){ scanf("%d",&n); int kt= kiemtraSNT(n); if(kt==0) printf("NO\n"); else printf("YES\n"); } }