#include <stdio.h>
int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b){
        printf("CAR\n");
        }
        else if(a==b){
            printf("SAME\n");
        } 
        else{
            printf("BIKE\n");
        }
}
return 0;
}
