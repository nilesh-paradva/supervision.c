#include<stdio.h>

int main(){

    char ch;
    int count =0;

    FILE* fptr = fopen("document.txt", "r");

    if (ch == ' ' || ch == 0) count++;
      
    printf("words in number count: %d", count);  
    fclose(fptr);   

    return 0;
}