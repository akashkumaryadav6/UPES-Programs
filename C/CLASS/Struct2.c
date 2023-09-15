#include <stdio.h>

int main(){
    struct Student{
        char name;
        int id;
        float percent;
    };
    
    printf("%d\n",sizeof(struct Student));
    struct Student record = {"AKY", 45, 82.35};
    struct Student *ptr;
    ptr = &record;
    printf("%d\n",ptr->id);
    printf("%c\n",ptr->name);
    printf("%.2f\n",ptr->percent);
    return 0;
}