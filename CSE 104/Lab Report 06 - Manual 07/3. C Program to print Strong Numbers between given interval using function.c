#include <stdio.h>
void strong_number(int n1, int n2);
long long fact(int temp);

int main(){
    int n1, n2;
    printf("Enter starting point: ");
    scanf("%d", &n1);
    printf("Enter ending point: ");
    scanf("%d", &n2);
    strong_number(n1, n2);
    return 0;
}

void strong_number(int n1, int n2){
    int i, j, sum, temp;
    
    while (n1 != n2)
    {
        temp = n1;
        sum = 0;
        while (temp != 0)
        {
            sum += fact(temp % 10);
            temp /= 10;
        }
        if ( n1 == sum)
        {
            printf("%d, ", n1);
        }
        n1++;
    }
}
long long fact (int temp){
    if (temp == 0)
        return 1;
    else
        return (temp * fact(temp -1));
}
