#include<stdio.h>
/* Write a C program that opens a file in append mode and allows the user to add text to end of the file*/
int main()
{
    FILE *fptr = fopen("append.txt", "a");
    fprintf(fptr, "Modified at: %s %s\n", __TIME__, __DATE__);
    return 0;
}