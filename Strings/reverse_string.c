#include<stdio.h>
#include<string.h>
void main(){
    char str[40],rev[94];
    int i,j;
    printf("enter the string:");
    gets(str);
   printf("%s",str);
    j=strlen(str)-1; //-1 bcz indexing starts from 0
    for(i=0;i<strlen(str);i++){
    rev[i]=str[j];
    j--;}
    rev[i]='\0';
   printf("\nthe reverse string is %s",rev);
}