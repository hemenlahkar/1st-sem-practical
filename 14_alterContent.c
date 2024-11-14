#include<stdio.h>
//Write a program in which a function is passed address of two variables and then alter its contents

void alterContent(int *a, int *b)
{
    *a = 5 * *a;
    *b = 8 * *b;
}

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("Before alteration: a = %d, b = %d\n", a, b);
    alterContent(&a, &b);
    printf("After alteration: a = %d, b = %d\n", a, b);
    return 0;
}