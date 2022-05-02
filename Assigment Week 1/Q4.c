#include<stdio.h>

int main(){
    int x,y;
    printf("ENter the 1st number: ");
    scanf("%d",&x);
    printf("ENter the 2nd number: ");
    scanf("%d",&y);
    int n;
printf("1:Sum\n2:substraction\n3:Multiplication\n4:division\nEnter : ");
    scanf("%d",&n);
    switch(n){
        case(1):
            printf("Sum is : %d\n",x+y);
            break;
        case(2):
            printf("substraction is : %d\n",x-y);
            break;
        case(3):
            printf("Multiplication  is : %d\n",x*y);
            break;
        case(4):
            printf("Division is : %d\n",x/y);
            break;
    }
    return 0;
}