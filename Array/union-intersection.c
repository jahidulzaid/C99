
 
void get_value(int arr[])
{
    
}
 
void print_value(int arr[], int n)
{
    
}
 
void function_sort(int arr[])
{
    int i, j, temp, swapping, size;
 
    for (i = 1; i < size; i++)
    {
        swapping = 0;
        for (j = 0; j < size-i; j++)
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
 
int find_intersection(int array1[], int array2[], int intersection_array[])
{
    int i = 0, j = 0, k = 0, size;
    while ((i < size) && (j < size))
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else if (array1[i] > array2[j])
        {
            j++;
        }
        else
        {
            intersection_array[k] = array1[i];
            i++;
            j++;
            k++;
        }
    }
    return(k);
}
 
int find_union(int array1[], int array2[], int union_array[])
{
    int i = 0, j = 0, k = 0;
    while ((i < 5) && (j < 5))
    {
        if (array1[i] < array2[j])
        {
            union_array[k] = array1[i];
            i++;
            k++;
        }
        else if (array1[i] > array2[j])
        {
            union_array[k] = array2[j];
            j++;
            k++;
        }
        else
        {
            union_array[k] = array1[i];
            i++;
            j++;
            k++;
        }
    }
    if (i == 5)
    {
        while (j < 5)
        {
            union_array[k] = array2[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < 5)
        {
            union_array[k] = array1[i];
            i++;
            k++;
        }
    }
    return(k);
}