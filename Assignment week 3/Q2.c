#include<stdio.h>
int prime(int i,int n){
    if(n==i){
        return 1;
    }
    else if(n%i==0){
        return 0;
    }
    else{
        return prime(i+1,n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a=prime(2,n);
    if(a==1){
        printf("prime");
    }   
    else{
        printf("not prime");
    }
    return 0;
}