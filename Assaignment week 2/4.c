#include<stdio.h>

int main(){
    int a=0;
    int b=1;
    int n;
    int num[200];
    num[0]=0;
    num[1]=1;
     
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        num[i]=num[i-1]+num[i-2];
    }
    for(int i=0;i<n;i++){

        printf("%d ",num[i]);

    }
    
    return 0;
}