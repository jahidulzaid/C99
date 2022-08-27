/*
 * C Program to Find Union & Intersection of 2 Arrays
 */
#include <stdio.h>
 
int a[5], b[5];
int i = 0, j = 0, k = 0;
int intersection_array[5];
int union_array[10];
 
void main()
{
    int intersection_array[5], union_array[5*2];
    int num_elements;
 
    //input elements of Array1
    printf("Enter the elements of Array 1: ");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n Elements of Array 1: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    //input elements of Array2
    printf("\nEnter the elements of Array 2: ");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter element %d: ", i);
        scanf("%d", &b[i]);
    }

    printf("\n\n Elements of Array 2: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
 
    //Find Intersection
    printf("\n\n Intersection is: ");
    while ((i < 5) && (j < 5))
    {
        for (k = i; k < 5; k++){
            printf("%d ", a[k]);
            if (a[i] < b[j])
            {
                i++;
            }
        }
    }
    //find union
    int m = 5;
    for(int  i =0; i< 5; i++)
    {
        union_array[i] = a[i];
    }
    for(int i = 0; i< 5; i++ )
    {
        int c = 1;
        for (int j= 0; j<5; j++)
        {
            if (a[j]==b[i])
            {   
                c = 0;
                break;
            }   
        }
    
        if (c == 1){
            union_array[m] = b[i];
            m++;
        }
    }
    for (int i = 0; i<10; i++){
            printf("%d ", union_array[i]);
        }
}
