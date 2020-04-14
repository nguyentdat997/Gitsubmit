/*program input an array and print data after sort to screen*/

#include <stdio.h>
#include <stdlib.h>

/*declaration function*/
/************************************************************
function TangDan: sort array in ascending order
input: array pointer point to array
       n number element of array
output: array pointer point to array
************************************************************/
int * TangDan(int *array, int n)
{
    int i =0;
    int j =0;
    int temp =0;
    for (i =0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                temp = array[i];
                array[i]= array[j];
                array[j]=temp;
            }
        }
    }
    return array;
}



int main()
{
    int n =0;
    int i =0;
    int *array;
    printf("Program sort array!\n");
    printf("Input number element of array n = ");
    fflush(stdin);
    scanf("%d",&n);
    array = (int*)malloc(sizeof(int));
    printf("Input data for array:\n");
    for(i=0;i<n;i++)
    {
        printf("array[%d] = ",i);
        fflush(stdin);
        scanf("%d",array+i);
    }

    printf("Data after sort in ascending order:\n");
    array = TangDan(array,n);
    for(i=0;i<n;i++)
    {
        printf("array[%d] = %d\n",i,*(array+i));
        fflush(stdin);
    }
    free(array);
}

