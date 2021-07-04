#include<stdio.h>
int main()
{
    int n;
    printf("enter total number of elements of array \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nenter %d elements of array\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n - 1; i++) \
    { 
        for (int j = i + 1; j<n; j++)
        {
            if (arr[j]<arr[i]) 
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int first,search,middle,last;
    first=0;
    last=n;
    printf("\nenter element to be searched\n");
    scanf("%d",&search);
    middle=(first+last)/2;
    while(first<last)
    {

        if(arr[middle]<search)
        {
            first=middle+1;
        }
        else if(arr[middle]==search)
        {
            printf("element found at possition %d \n",middle);
            break;
        }
        else
        {
            last=middle-1;
            middle=(first+last)/2;           
        }
    }    
        if(first>last)
        {
            printf("NOT FOUND");
            return 0;
        }
}        