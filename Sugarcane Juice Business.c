#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,tot,profit,b;
        scanf("%d",&a);
        tot=50*a;
        b=(20*tot)/100 + (20*tot)/100 +(30*tot)/100 ;
        profit=tot-b;
        printf("%d\n",profit);
    }
    return 0;
}

