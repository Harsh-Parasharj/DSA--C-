///Question : Find the 2nd and 3rd largest numbers in an array.  (Solved By Harsh Parashar)  (Pre Requirements : Basic Knowledge of C Programming)


#include <stdio.h>  ///Basically used to include basic functions like (printf ,scanf)
#include <limits.h>  ///Basically used to take use of INT_MIN (Gives smallest value of an integer in C: , e.g., −2,147,483,648)
int main()
{
    
    
    int size , first = INT_MIN , second = INT_MIN , third = INT_MIN;
    printf("Enter the size of the array :");
    scanf("%d" , &size);                                   /// 🔹 Portion 1: Input elements into the array
    int arr[size];                        
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element of the array at arr[%d] : " , i);
        scanf("%d" , &arr[i]);
    }
    
    
     /// 🔹 Portion 2: Find the 1st, 2nd, and 3rd largest numbers
    
    for (int i = 0; i < size; i++)    
    {
        if (arr[i] > first)
        {
            third = second;                         
            second = first;                 /// If new largest is found → shift first → second, second → third
            third = second;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            third = second;
            second = arr[i];               /// If number is between first and second → shift second → third
            third = second;
        }
        else if (arr[i] < second && arr[i] > third)
        {
           third = arr[i];                 /// If number is between second and third → update third
        }
    }
    
    
    if (third == INT_MIN)
        printf("Not enough elements available");
    else
        {                                                    ///Final Comparison if condition (Whether there is not only 2 elements in the array because for this problem we minimum require three elements in the array first is the largest one and another two for second and third largest)
            printf("\nSecond Largest is %d\n" , second);
            printf("Third Largest is %d" , third);            ///If Arr(elements) >= 3 then print(second largest and third largest).
        }
    return 0;
}


