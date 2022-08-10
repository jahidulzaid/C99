#include <stdio.h>  
void fact(int num);
int main(){
    int num;
    fact(4); // pass the parameter here

}
void fact(int num){
    int fact=1, i;
    // scanf("%d", &num);
    for(int i = 1; i<= num; i++ ){
        fact *= i;
    }
    printf("Fact of %d is %d", num, fact);
}