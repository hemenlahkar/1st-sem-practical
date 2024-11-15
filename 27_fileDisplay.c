#include <stdio.h>
#include <stdlib.h>

void displayTextMode(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
}

void displayBinaryMode(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    unsigned char buffer[16];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0)
    {
        for (size_t i = 0; i < bytesRead; i++)
        {
            printf("%02x ", buffer[i]);
        }
        printf("\n");
    }

    fclose(file);
}

int main()
{
    const char *filename = "random.txt";

    printf("Displaying file contents in text mode:\n");
    displayTextMode(filename);

    printf("\nDisplaying file contents in binary mode:\n");
    displayBinaryMode(filename);

    return 0;
}
