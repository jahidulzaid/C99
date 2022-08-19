#include <stdio.h>

int main(){
    int a[100][100], b[100][100], sum[100][100];
    int r, c;
    //Array Size from user.
    printf("Enter Rows 1 to 99: ");
    scanf("%d", &r);
    printf("Enter column 1 to 99: ");
    scanf("%d", &c);
    //read array element by matrix of arr a
    for (int i=0; i < r; i++){
        for (int j = 0; j<c; j++){
            printf("Enter elment of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    //read element of arr b
    for (int i=0; i < r; i++){
        for (int j = 0; j<c; j++){
            printf("Enter elment of b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //adding a and b
    for (int i=0; i < r; i++){
        for (int j = 0; j<c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    //printing output
    for (int i=0; i < r; i++){
        for (int j = 0; j<c; j++){
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;


}   