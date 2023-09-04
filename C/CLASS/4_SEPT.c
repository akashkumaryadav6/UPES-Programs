#include<stdio.h>
#include<string.h>
int main(){
    char greet[7]="Hello ";
    char name[10];
    gets(name);
    puts(greet);
    printf("STRCAT: %s\n",strcat(greet,name));
    puts(greet);
    printf("STRREV: %s\n",strrev(name));
    puts(greet);
    printf("STRCHR: %s\n",strchr(greet,'e'));
    puts(greet);
    printf("STRCMP: %d\n",strcmp(greet,name));
    char cpy[50];
    strcpy(cpy,name);
    printf("CPY: %s\n",cpy);
    int chrs;
    char copy[50];
    printf("Enter the number of characters: ");
    scanf("%d",&chrs);
    printf("\nEnter the characters: ");
    for(int i=0;i<chrs;i++){
        scanf("%s",&copy[i]);
        }
    printf("\n");
    printf("%s",copy);
    printf("\n");
    printf("\nEnter the characters: ");
    fgets(copy,9,stdin);
    printf("\n");
    fputs(copy,stdout);
    printf("\n");
    puts(copy);
    return 0;
}