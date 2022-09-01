#include <stdio.h>

int main()
{
    int arr[100][100];
    int i, j, n, space;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
            //printing space
            for (space = 0; space < n - 1 - i; ++space)
                printf(" ");

            //for
            for (j = 0; j <= i; ++j) {
                    /*
                if (j == 0 || j == i)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                    */

                printf("%d ", arr[i][j]);
            }

            printf("\n");
        }
        return 0;
}
