/// Question: Remove duplicate element from the array and also print the position of the duplicate elements. (Solved By Harsh Parashar) (Pre Requirements : Basic Knowledge of C Programming)





#include <stdio.h>
int main()
{
    int size;
    char input;

    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];                                                                             /// Taking input of the array from User
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }








    printf("\nDid you want to remove duplicate elements from the array (Y/N) :");
    scanf(" %c", &input);

    if (input == 'Y' || input == 'y')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)                                                ///Asking user if they want to remove duplicate elements from the array if say (y) then this code works 
            {
                if (arr[i] == arr[j])   /// Found duplicate element
                {
                    printf("\nDuplicate element %d found at index %d", arr[j], j);

                    for (int k = j; k < size - 1; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    size--;
                    j--;
                }
            }
        }

        printf("\n\nPrinting elements of the array after removing the duplicates......");
        for (int i = 0; i < size; i++)
        {
            printf("\n %d", arr[i]);
        }
    }









    else if (input == 'N' || input == 'n')
    {
        printf("\n\nPrinting element of the array :");
        for (int i = 0; i < size; i++)   /// If user chooses N, print array elements without removing duplicates
        {
            printf("\n %d", arr[i]);
        }
    }

    return 0;
}

