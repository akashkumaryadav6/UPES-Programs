// WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include <stdio.h>
int main(){
    int n, largest, second;
label:
    printf("\nHow many numbers do you want to enter? ");
    scanf("%d", &n);
    if (n > 2)
    {
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            printf("Enter the %d number:", i + 1);
            scanf("%d", &arr[i]);
        }
        if (arr[0] > arr[1])
        {
            largest = arr[0];
            second = arr[1];
        }
        else
        {
            largest = arr[1];
            second = arr[0];
        }

        for (int i = 2; i < 10; i++)
        {
            if (largest < arr[i])
            {
                second = largest;
                largest = arr[i];
            }
            else if (second < arr[i])
            {
                second = arr[i];
            }
        }
        printf("\nSecond Largest number is: %d", second);
    }
    else
    {
        printf("\nMinimum 3 numbers required!");
        goto label;
    }
}