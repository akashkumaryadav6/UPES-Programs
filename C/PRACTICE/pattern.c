#include<stdio.h>
int main(){
    int n=3;
    int items = n+(n-1);
    for (int i = 0; i < items; i++){
        for (int j= 0; j < items; j++){
            if (i==0 || i==items-1){
                printf("%d ",n);
            }
            else if (j==0){
                printf("%d ",n);
            }
            else if (j==items-1){
                printf("%d",n);
            }
            else if (i==1 && (j==items-2  || j==items-3 || j==items-4 || j==items-5 || j==items-6)){
                printf("%d ",n-1);
            }
            else if (i==items-2 && (j==items-2  || j==items-3 || j==items-4 || j==items-5 || j==items-6)){
                printf("%d ",n-1);
            }
            else if (i==items-3,2,3 && (j==items-2 || j==items-6)){
                printf("%d ",n-1);
            }
            else if (i==2 && (j==items-2 || j==items-6)){
                printf("%d ",n-1);
            }
            else if (i==3 && (j==items-2 || j==items-6)){
                printf("%d ",n-1);
            }
            else if (i==3,2,4 && (j==items-3 || j==items-5 || j==items-4)){
                printf("%d ",n-2);
            }
            else if (i==4 && j==4){
                printf("%d ",n-3);
            }
            else{
                printf("%");
            }
            
        }
        printf("\n");
    }
    return 0;
}