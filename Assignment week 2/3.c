#include<stdio.h>
#include<string.h>
int main(){
    char num[20];
    printf("Enter the number: ");
    scanf("%s",&num);
    int a =strlen(num);
    int b=num[0];
    num[0]=num[a-1];
    num[a-1]=b;
    printf("%s",num);
    return 0;
}