#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int age;
    char branch[20];
    char gender;
};

int main(){
    struct student student;
    student.age = 30;
    student.gender = 'M';
    strcpy(student.name, "ABC");
    strcpy(student.branch, "XYZ");


    printf("Name: %s\n", student.name);
    printf("Age: %d and gender: %c\n", student.age, student.gender);
    printf("Branch: %s\n", student.branch);




    struct student teacher;
    teacher.age = 30;
    teacher.gender = 'M';
    strcpy(teacher.name, "ABC");
    strcpy(teacher.branch, "XYZ");


    printf("Name: %s\n", teacher.name);
    printf("Age: %d and gender: %c\n", teacher.age, teacher.gender);
    printf("Branch: %s\n", teacher.branch);


    return 0;
}
