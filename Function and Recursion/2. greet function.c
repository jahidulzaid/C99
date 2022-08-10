#include<stdio.h>
void greet(){
    char input, hindu;
    printf("Are you Muslim? OR Hindu?\nPress M/m or H/h.\n");
    scanf("%c", &input);
    if (input == 'm' || input == 'M')
    {
        printf("Assalamu Alaikom\n");
    }
    else if (input == 'h'|| input == 'H')
    {
        printf("Naamaste\n");
    }
}

int main(){ 
    greet();
    return 0;
}