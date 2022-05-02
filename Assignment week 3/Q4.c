#include<stdio.h>
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    int *pa=&a;
    int *pb=&b;
    
    swap(pa,pb);
    printf("%d\n%d",a,b);
    return 0;
}