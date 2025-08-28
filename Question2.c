/// Question :Search the given element in the array and print the location/position of the element. (Take array input from the user) (Solved By Harsh Parashar) (Pre-Requirements : Basic knowledge of C Programming)



#include <stdio.h>
int main()
{
    int size = 0 , input = 0 , found = 0;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    int arr[size];                                              ///Taking input of the array from the user
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index arr[%d] :",i);
        scanf("%d" , &arr[i]);
    }
    
    
    printf("\nEnter the element you want to search :");
    scanf("%d" , &input);
    for (int i = 0; i < size; i++)
    {
        if (input == arr[i])                                  ///Finding the element location/position in the array 
        {
            printf("\nElement found at index %d" , i);
            found = 1;
        }
    }


  
    if (found == 0)
    {
        printf("Element does not exist in the array");        ///If element is not in the array then print element does not exist
    }
    return 0;
}
