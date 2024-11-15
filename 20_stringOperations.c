#include <stdio.h>
#include <string.h>

void lowerToUpper(char *str)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
}

void upperToLower(char *str)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
}

int calcVowel(char *str)
{
    int count = 0;
    for (int i = 0; str[i]!=0; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}

void reverseString(char *str)
{
    int len;
    for (len = 0; str[len]!=0; len++);
    for (int i = 0, temp; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

void stringCat(char *str1, char *str2)
{
    int len1, i;
    for (len1 = 0; str1[len1]!=0; len1++);
    
    for (i = 0; str2[i]!=0; i++)
        str1[len1+i] = str2[i];
    

    len1 += i;
    str1[len1] = 0;
    
}

int main()
{
    char str[256], str2[128];
    printf("Enter the string: ");
    gets(str);

    // lowerToUpper(str);
    // upperToLower(str);
    // printf("\nNo of vowel = %d", calcVowel(str));
    // reverseString(str);

    // printf("Enter the second string: ");
    // scanf("%[^\n]", str2);
    // stringCat(str, str2);
    // strcat(str, str2);
    // printf("\n%d", strcmp(str, str2));
    strcpy(str, "Hello LCBians!\n");
    printf("%s", str);
    return 0;
}