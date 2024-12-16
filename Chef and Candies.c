#include <stdio.h>

int main() {
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        
        if(a>b){
        int c=a-b;
        printf("%d\n",(c+3)/4);
        
        }
        else{
            printf("0\n");
        } 
        
       }
	
return 0;
}
