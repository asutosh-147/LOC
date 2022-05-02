#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    printf("Radius is %d\n",2*r);
    printf("Circumferrence is %.2f\n",2*3.14*r);
    printf("Area is %.2f",3.14*r*r);

    return 0;
}