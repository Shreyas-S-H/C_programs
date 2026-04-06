#include<stdio.h>
#include<string.h>
void main(){
    char str[50]="shweta";
    printf("%s\n",str);
    //2nd index pe 'e'
    for(int i=strlen(str);i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='e';
    printf("%s",str);
}