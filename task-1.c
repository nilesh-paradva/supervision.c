#include<stdio.h>

int main(){

    //file open to close file
    FILE* fptr = fopen("sample.txt", "r");

    if(fptr == NULL){

        printf("file not open");

    }

    fclose(fptr);

    return 0;
}