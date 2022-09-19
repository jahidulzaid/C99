#include<stdio.h>

long long numRecurive(long long int n){
    printf("%lld\n", n);
    numRecurive(n+1);
}
double main(){

    numRecurive(1);
    return 0;
}