#include<stdio.h>

int main(){
    char name[30];
    char hobbies[30];
    char branch[30];
    char regno[30];
    printf("Enter your name: ");
    gets(name);
    printf("Enter your Hobbies: ");
    gets(hobbies);
    printf("Enter your Branch: ");
    gets(branch);
    printf("Enter your Reg.No: ");
    gets(regno);
    printf("Name- %s\nReg.no-%s\nbranch-%s\nhobbies-%s",name,regno,branch,hobbies);
    return 0;
}