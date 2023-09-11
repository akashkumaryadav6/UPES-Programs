#include <stdio.h>

int main(){
    struct Measure{
        int feet;
        float inch;
    } sum;
    sum.feet = 0;
    sum.inch= 0;
    int entries;
    printf("Enter the number of measurements: ");
    scanf("%d", &entries);
    struct Measure dist[entries];
    for (int i = 0; i < entries; i++){
        printf("Measurement %d\n", i+1);
        printf("Enter the feet for dist[%d]: ",i+1);
        scanf("%d",&dist[i].feet);
        printf("Enter the inch for dist[%d]: ",i+1);
        scanf("%f",&dist[i].inch);
    }
    for (int i = 0; i < entries; i++){
        printf("Distance %d is: %d\' %.0f\"\n", i+1,dist[i].feet,dist[i].inch);
    }
    for (int i = 0; i < entries; i++){
        sum.feet += dist[i].feet;
        sum.inch += dist[i].inch;
    }

    if (sum.inch>=12){
            sum.feet++;
            sum.inch = sum.inch - 12;
        }
    printf("Distance is: %d\' %.0f\"\n", sum.feet,sum.inch);
    return 0;
}
