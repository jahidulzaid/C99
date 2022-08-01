#include <stdio.h>

int main(){
    int i, n;
    printf("Enter a num: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){

        for (int j=1;j<=n;j++){
            printf("* ");
            }
        printf("\n");
    }
    return 0;
}