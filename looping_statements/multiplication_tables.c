#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i*n){
        printf("%d ",i);
    }
}