/*WAP to print.
1
12
123
1234
12345
1234
123
12
1*/

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Determine the length of the pattern: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = n; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}