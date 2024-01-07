#include <stdio.h>

// Function to read a complex number
void complexRead(int *real, int *i)
{
    printf("\nEnter complex number");
    printf("\nEnter the real part: ");
    scanf("%d", real);
    printf("Enter the imaginary part (without 'i'): ");
    scanf("%d", i);
}

// Function to print a complex number
void complexPrint(int real, int i)
{
    if (i >= 0)
        printf("The complex number is: %d + %di\n", real, i);
    else
        printf("The complex number is: %d - %di\n", real, -i);
}

// Function to add two complex numbers
void complexAdd(int real1, int i1, int real2, int i2)
{
    int *resultReal = real1 + real2;
    int *resulti = i1 + i2;
    printf("The sum of complex numbers is: %d + %di\n", resultReal, resulti);
}

// Function to subtract two complex numbers
void complexSub(int real1, int i1, int real2, int i2)
{
    int *resultReal = real1 - real2;
    int *resulti = i1 - i2;
    printf("The sum of complex numbers is: %d - %di\n", resultReal, resulti);
}

int main()
{
    int firstr, firsti, secondr, secondi;
    complexRead(&firstr, &firsti);
    complexRead(&secondr, &secondi);
    complexPrint(firstr, firsti);
    complexPrint(secondr, secondi);
    complexAdd(firstr, firsti, secondr, secondi);
    complexSub(firstr, firsti, secondr, secondi);
    
    return 0;
}
