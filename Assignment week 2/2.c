#include<stdio.h>

int main(){
    int num[10];
    int even=0;
    int odd=0;
    for(int i=0;i<10;i++){
        printf("Enter integer %d:\n",i+1);
        scanf("%d",&num[i]); 
    }
    for(int i=0;i<10;i++){
        if(num[i]%2==0){
            even=even+num[i];
        }
        if(num[i]%2!=0){
            odd=odd+num[i];
        }
    }
    printf("sum of even numbers is : %d\n",even);
    printf("sum of odd numbers is : %d",odd);
    return 0;
}