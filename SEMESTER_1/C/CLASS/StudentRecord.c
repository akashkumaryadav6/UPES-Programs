#include <stdio.h>
#include <string.h>

int main(){
    struct Student{
        char name[30];
        int id;
        char course[20];
    };
    int entries;
    printf("Enter the number of measurements: ");
    scanf("%d", &entries);
    struct Student record[entries];
    for (int i = 0; i < entries; i++){
        printf("Student %d\n", i+1);
        printf("Enter the ID for Student[%d]: ",i+1);
        scanf("%d",&record[i].id);
        printf("Enter the Name for Student[%d]: ",i+1);
        char name[30];
        scanf("%s",&name);
        strcpy(record[i].name, name);
        printf("Enter the Course for Student[%d]: ",i+1);
        char course[20];
        scanf("%s",&course);
        strcpy(record[i].course, course);
    }
    for (int i = 0; i < entries; i++){
        printf("Student [%d]'s record is: \nID: %d\nName: %s\nCourse:  %s\n", i+1,record[i].id,record[i].name,record[i].course);
    }
    return 0;
}
