//Dhruv 106117025
//Bubble Sort
#include <stdio.h>
int main()
{
    int arr[20],n1,i,j,t;
    printf("Enter array size:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    	scanf("%d",&arr[i]);
    bool swapped;
    for (i = 0; i < n1-1; i++)
    {
     swapped = false;
     for (j = 0; j < n1-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           t=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=t;
           swapped = true;
        }
     }
    if (swapped == false)
        break;
    }
    printf("Sorted array: \n");
    for (i=0; i<n1; i++)
        printf("%d ", arr[i]);
    return 0;
}

