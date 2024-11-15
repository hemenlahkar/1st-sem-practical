#include<stdio.h>
/*Write a C program that opens a file for reading and 
displays the contents of the file character by character and line by line*/

int main()
{
    FILE *fptr = fopen("random.txt", "r");
    char c;
    while ((c = fgetc(fptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fptr);
    return 0;
}