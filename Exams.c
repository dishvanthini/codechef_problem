//In Chefland, there are X schools, and each school has Y students.The year end results are in and a total of Z students passed the exams.Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.
#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
    while(t--){
        int x,y,z,tot;
        scanf("%d %d %d",&x,&y,&z);
        tot=x*y;
        if(z>tot/2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
return 0;
}

