#include<stdio.h>

int main(){

    FILE* fptr = fopen("input.txt", "r");

    //print to the console.
    char ch[100];
    while(fgets(ch,100,fptr) != NULL)
        printf("%s", ch);

    return 0;
}