//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include<stdio.h>

int main(){
    unsigned int x1, y1, x2, y2, x3, y3;
    printf("Enter 1st pair of points: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter 2nd pair of points: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter 3rd pair of points: ");
    scanf("%d %d", &x3, &y3);
    
    if ((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2==0){
        printf("\nPoints are Collinear.");
    }
    else{
        printf("\nPoints are Non-Collinear.");
    }
}