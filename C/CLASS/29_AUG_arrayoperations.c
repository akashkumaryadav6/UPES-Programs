#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[50], ele, loc, new_ele, del_ele, choice, temp, append_ele, new_index, search;
    printf("Enter the number of elements: ");
    scanf("%d", &ele);
    for (int i = 0; i < ele; i++)
    {
        scanf("%d", &arr[i]);
    }
    label:
        printf("\nEnter your choice: \n1. Print the array\n2. Insert an element\n3. Delete an element\n4. Append 'n' elements\n5. Linear Search\n0. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("\nYour choice: 0. Exit");
            exit(0);
        case 1:
            printf("\nYour choice: 1. Print the array");
            printf("\nThe array is: [");
            for (int i = 0; i < ele; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("]\n");
            break;
        case 2:
            printf("\nYour choice: 2. Insert an element");
            printf("\nEnter the location to insert a new element: ");
            scanf("%d", &loc);
            if (loc > 50)
            {
                printf("\nLocation not found!");
            }
            else
            {
                printf("Enter the new element: ");
                scanf("%d", &new_ele);
                for (int i = ele - 1; i >= loc - 1; i--)
                {
                    arr[i + 1] = arr[i];
                }
                arr[loc - 1] = new_ele;
            }
            printf("\nThe updated array is: [");
            for (int i = 0; i < ele + 1; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("]\n");
            ele++;
            break;
        case 3:
            printf("\nYour choice: 3. Delete an element");
            printf("\nEnter the location of the element to be deleted: ");
            scanf("%d", &loc);
            if (loc >= ele + 1)
            {
                printf("\nNo such element found!");
            }
            else
            {
                for (int j = (loc - 1); j <= ele; j++)
                {
                    arr[j] = arr[j + 1];
                }
                printf("Deleted %d", arr[loc - 1]);
                printf("\nThe updated array is: [");
                for (int i = 0; i < ele; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("]\n");
            }
            break;
        case 4:
            printf("\nYour choice: 4. Append 'n' elements");
            printf("\nEnter the number of elements to be appended: ");
            scanf("%d", &append_ele);
            ele = ele + append_ele;
            printf("\nEnter the elements to be appended: \n");
            for (int i = (ele - append_ele)+1; i <= ele; i++)
            {
                scanf("%d", &arr[i]);
            }
            printf("\nThe updated array is: [");
            for (int i = 0; i <= ele; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("]\n");
            break;
        case 5:
            printf("\nYour choice: 5. Linear Search");
            printf("\nEnter an element to search: ");
            scanf("%d", &search);
            for (int i = 0; i < ele; i++)
            {
                if (arr[i] == search)
                {
                    loc = i;
                }
                else
                {
                    continue;
                    printf("\nElement not found!");
                }
            }
            printf("\nThe location of %d is %d", search, loc + 1);
            break;
        default:
            printf("No such option!");
        }
    goto label;
}