
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, rootP, rootN, disciminant;
    printf("Enter values of a b and c:  ");
    scanf("%f %f %f", &a, &b, &c);

    disciminant = (b*b - 4*a*c);

    if(disciminant <0)
    {
        printf("The roots are imaginary.\n");
    }
    else{
        rootP = (- b + sqrt(disciminant)) / (2.0*a);
        rootN = (- b - sqrt(disciminant)) / (2.0*a);
        printf("The root using (+ve) sign: %5.2f\n", rootP);
        printf("The root using (-ve) sign: %5.2f", rootN);
    }




}
