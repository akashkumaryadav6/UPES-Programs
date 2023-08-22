#include<stdio.h>

int main(){
    int m,n,o,p;
    int arr[m][n], arr2[o][p];

    //printing MATRIX 1
    printf("Enter the number of rows (m): ");
    scanf("%d",&m);
    printf("Enter the number of rows (n): ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    /*//printing MATRIX 2
    printf("Enter the number of rows (m): ");
    scanf("%d",&o);
    printf("Enter the number of rows (n): ");
    scanf("%d",&p);
    printf("Enter the elements: \n");
    for (int i=0; i<o; i++){
        for (int j=0; j<p; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<o; i++){
        for (int j=0; j<p; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

   if (m==o && n==p){
        int res[m][p];
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                res[i][j]=arr[i][j]+arr2[i][j];
            }
        }
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("The order of matrices is not suitable.");
    }*/
   
    return 0;
}