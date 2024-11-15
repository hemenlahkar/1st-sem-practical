#include <stdio.h>
/* Write a program to open a file and count the number of characters and lines in the file*/
int main()
{
    FILE *fptr = fopen("random.txt", "r");
    int lines = 1, characters = 0, c;
    while ((c = fgetc(fptr)) != EOF)
    {
        if (c == '\n')
            lines++;
        characters++;
    }

    printf("\nThere are %d lines and %d characters in the file \'random.txt\'.\n", lines, characters);
    return 0;
}