
#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int age;
    char branch[20];
    char gender;
};

int main(){
    int i;
    struct student std[5];
    for (i=0; i<5; i++){
        printf("Student %d name: ", i+1);
        scanf("%s", std[i].name);
        printf("Student %d age: ", i+1);
        scanf("%d", &std[i].age);
    }
    printf("\n\n");
    for(i=0; i<5; i++){
        printf("Student %d name: %s\n", i+1, std[i].name);
        printf("Student %d age: %d\n", i+1, std[i].age);
    }



    return 0;
}
