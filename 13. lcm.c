#include <stdio.h>

int main(){
int n1, n2, lcm, max;
printf("Enter two num to check LCM: ");
scanf("%d %d", &n1, &n2);
max = (n1>n2) ? n1: n2;
while(1){
    if(max %n1 == 0 && max % n2 == 0)
    {

        printf("The LCM is %d", lcm);
        break;
    }
    max++;
    lcm = max;
}
}
