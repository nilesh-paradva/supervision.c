#include<stdio.h>

int main(){

    //file open to close file
    FILE* fptr = fopen("sample.txt", "r");
    fclose(fptr);

    return 0;
}