
///Question :Removing first occurrence of user defined element from the array.   (Solved by Harsh Parashar)  (Pre-Requirements : Basic Knowledge of C Programming)


#include <stdio.h>
int main()
{
    int size , input , rm_element , position;
    char input0;
    printf("Enter the size of the array :");
    scanf("%d" , &size);                                      ///Taking Input of the Array 
    int arr[size];                                                
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index arr[%d] :" , i);
        scanf("%d" , &arr[i]);
    }
    
    
    
    
    printf("\nDo you want to remove an element from this array (Y/N): ");
    scanf(" %c" , &input0);
    if (input0 == 'Y')
    {
        printf("Enter the element you want to remove from the array :");
        scanf("%d" , &rm_element);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == rm_element)
            {
                position = i;                             ///Checking User input and if user say yes than removes the first occurence
            }
        }
        for (int i = position; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nPrinting Updated array.............\n");
        for (int i  = 0; i < size; i++)
        {
            printf("Array element at index arr[%d] : %d\n", i , arr[i]);
        }
    }
    
    
    
    else
    {
        printf("Printing Array.......................\n");
        for (int i  = 0; i < size; i++)                                       ///Checking User input and if user say no the print the Array
        {
            printf("Array element at index arr[%d] : %d\n", i , arr[i]);
        }
    }
    return 0;
}

