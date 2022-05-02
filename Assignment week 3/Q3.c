#include<stdio.h>
void EO(int n){
    if(n%2==0){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);

    }
}
int main(){
    int n;
    scanf("%d",&n);
    EO(n);
    return 0;
}