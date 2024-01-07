//WAP that reads two matrices A (m x n) and B (p x q) and computes the product of A and B.
#include<stdio.h>

int main(){
    int m,n,o,p;
    int arr[50][50], arr2[50][50];
    int res[50][50];

    //inputing MATRIX 1
    printf("\nEnter the number of rows (m): ");
    scanf("%d",&m);
    printf("Enter the number of cols (n): ");
    scanf("%d",&n);
    printf("\nEnter the %d*%d elements: \n",m,n);
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("arrayFirst[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //inputing MATRIX 2
    printf("\nEnter the number of rows (m): ");
    scanf("%d",&o);
    printf("Enter the number of cols (n): ");
    scanf("%d",&p);
    printf("\nEnter the %d*%d elements: \n",o,p);
    for (int i=0; i<o; i++){
        for (int j=0; j<p; j++){
            printf("arraySecond[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
   //printing resultant array
   if (n==o){
        for (int i=0; i<m; i++){
            for (int j=0; j<p; j++){
                res[i][j]=0;
                for (int k=0;k<=p;k++){
                    res[i][j]=res[i][j]+(arr[i][k])*(arr2[k][j]);
                    }
                }
            }
    }
    else{
        printf("\nThe order of matrices is not suitable.");
    }

    printf("\n\nThe Multiplied array is:\n");
    for (int i=0; i<m; i++){
            for (int j=0; j<p; j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    return 0;
}