#include <stdio.h>
#include <conio.h>
int main() {
    int num=1, m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of cols (n): ");
    scanf("%d", &n);
    printf("Your matrix for %dx%d elements is printed below:\n",m,n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}