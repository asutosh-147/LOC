#include<stdio.h>
void largest(int *arr,int n){
     int f1=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)>f1){
            f1=*(arr+i);
        }
    }
     printf("%d is the largest number",f1);
}
int main(){
    int arr[5]={1,2,6,3,4};
    int *ptr=&arr[0];
    largest(ptr,5);

    return 0;
}