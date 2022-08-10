#include <stdio.h>
int main(){
    int i,j, n1, n2; int flag = 0;
    printf("Enter the smaller num: ");
    scanf("%d", &n1);
    printf("Enter the bigger num: ");
    scanf("%d", &n2);

    for (i=n1; i<=n2; i++){
        //skip 1 and 0
        if(i==0||i==1){
            continue;
        }
        flag =0;
        // flag 0 is prime and 1 for which isn't;
        for (j=2; j<=i/2; j++){
            if (i % j == 0){
                flag = 1;
                break;
            }
        
        }
        if (flag==0)
        {
            printf("%d ", i);
        }

           
    }
    
    return 0;
}