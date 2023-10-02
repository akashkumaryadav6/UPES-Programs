//Write a C program to check whether the given number is a palindrome or not.
#include<stdio.h>
char isPalindrome(char str[]);
void main(){
    char word[100];
    printf("What is your word or sentence? ");
    gets(word);
    isPalindrome(word);
}

int strLength(char str[]){
    int index=0;
    while(str[index]!='\0'){
        index++;
    }
    return index;
}
char isPalindrome(char str[]){
    char rev[100];
    int flag = 0;
    int index = strLength(str);
    for (int i = index - 1, j = 0; i >= 0; i--, j++){
        rev[j]=str[i];
    }
    rev[index] = '\0';
    for (int i = 0; i < index; i++){
        if (str[i]==rev[i]){
            flag = 1;
            break;
        }
    }
    if (flag){
        printf("%s is a Palindrome!",str);
    }
    else{
        printf("%s is not a Palindrome!",str);
    }
}