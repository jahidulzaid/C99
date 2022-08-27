
// C Program to Find Union & Intersection of 2 Arrays

#include <stdio.h>
 
void get_value(int arr[]);
void print_value(int arr[], int n);
void function_sort(int arr[]);
int find_intersection(int a[], int b[], int intersection_array[]);
int find_union(int a[], int b[], int union_array[]);
 
void main()
{
    int a[5], b[5], intersection_array[5], union_array[5*2];
    int num_elements;
 
    //input elements of A
    printf("\n Enter the elements of a: ");
    get_value(a);
    printf("\n\n Elements of Array a: ");
    print_value(a, 5);
 
    //Sort array a
    function_sort(a);
    printf("\n\nSorted elements of Array a: ");
    print_value(a, 5);
 
    //input elements of b
    printf("\n\nEnter the elements of Array b: ");
    get_value(b);
    printf("\n\n Elements of Array b: ");
    print_value(b, 5);
 
    //Sort array b
    function_sort(b);
    printf("\n\nSorted elements of Array b: ");
    print_value(b, 5);
 
    //Find Intersection
    num_elements = find_intersection(a, b, intersection_array);
    printf("\n\n Intersection is: ");
    print_value(intersection_array, num_elements);
 
    //Find Union
    num_elements = find_union(a, b, union_array);
    printf("\n\n Union is: ");
    print_value(union_array, num_elements);
}
 
void get_value(int arr[])
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        j = i + 1;
        printf("\n Enter element %d: ", j);
        scanf("%d", &arr[i]);
    }
}
 
void print_value(int arr[], int n)
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}
 
void function_sort(int arr[])
{
    int i, j, temp, swapping;
 
    for (i = 1; i < 5; i++)
    {
        swapping = 0;
        for (j = 0; j < 5-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapping = 1;
            }
        }
        if (swapping == 0)
        {
            break;
        }
    }
}
 
int find_intersection(int a[], int b[], int intersection_array[])
{
    int i = 0, j = 0, k = 0;
    while ((i < 5) && (j < 5))
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            intersection_array[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    return(k);
}
 
int find_union(int a[], int b[], int union_array[])
{
    int i = 0, j = 0, k = 0;
    while ((i < 5) && (j < 5))
    {
        if (a[i] < b[j])
        {
            union_array[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            union_array[k] = b[j];
            j++;
            k++;
        }
        else
        {
            union_array[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    if (i == 5)
    {
        while (j < 5)
        {
            union_array[k] = b[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < 5)
        {
            union_array[k] = a[i];
            i++;
            k++;
        }
    }
    return(k);
}
