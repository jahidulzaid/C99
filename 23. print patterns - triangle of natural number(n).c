// prints triangles of natural numbers..
#include <stdio.h>
int main(){
int n, i, j ;
printf("Enter a num: ");
scanf("%d", &n);

for (i =1; i<=n; ++i ){
    for(j=1; j<=i; ++j)
        printf("%d ", j);
    printf("\n");

}

}

