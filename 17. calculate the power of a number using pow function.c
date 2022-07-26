#include <stdio.h>
#include <math.h>
int main(){
double exp, base, result=1.0;
printf("Enter base number: ");
scanf("%lf", &base);
printf("Enter power number: ");
scanf("%lf", &exp);
result = pow(base, exp);
printf("%.1lf\n", result);
printf("%.1lf^%.1lf = %.2lf", base, exp, result);

}
