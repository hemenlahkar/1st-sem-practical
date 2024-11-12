#include<stdio.h>
/* Write a function that checks whether a given string is Palindrome or not.
Use this function to find whether the string entered by user is Palindrome or not*/

int checkPalindrome(char *str)
{
    int len;
    for(len = 0; str[len] != 0; len ++);
    for(int i = 0; i<len/2; i++)
    {
        if(str[i] !=  str[len-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    if(checkPalindrome(str))
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is NOT a Palindrome\n", str);
    return 0;
}