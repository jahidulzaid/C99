#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Enter total number of Input ( 1 to 50): ");
    int n;
    scanf("%d", &n);
    if(n<1 || n>50){
        printf("Invalid Input");
        exit(0);
    }
        printf("Enter %d String: ", n);
        //declare 50 char arrays
        char str[50][100];
        for (int i = 0 ; i < n; i++)
        {
            scanf("%s", str[i]);
        }
        //find the longest string
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if(strlen(str[i])>max)
                max = strlen(str[i]);
        }
        //printf("%d", max);
        printf("The output file is: \n\n");
        for (int i = 0; i < n; i++)
        {
            printf("%*s", max, str[i]);
            printf("\n");
        }
        return 0;
}