#include<stdio.h>

    void minmax(int *a,int *b,int *min,int *max){
        if(*a>*b){
        *max=*a;
       *min=*b;
        }
        else{
            *max=*b;
            *min=*a;
        }
    }
    void main(){
    int n1,n2,min,max;
    printf("enter integer pointer a and b:");
    scanf("%d %d ",n1,n2);
    minmax(&n1,&n2,&min,&max);
    printf("max=%d and min=%d",max,min);
}