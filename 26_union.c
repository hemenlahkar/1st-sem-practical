#include<stdio.h>
/*Write a program to implement union in C.
Create a structure of person with Pid, Name and other credentials
with proper datatype and print the same*/

typedef struct person
{
    int Pid;
    char name[30];
    char address[50];
    char phone[11];
} Person;

int main()
{
    Person p;
    printf("Enter identification number: ");
    scanf("%d", &p.Pid);
    fflush(stdin);
    printf("Enter Name: ");
    gets(p.name);
    fflush(stdin);
    printf("Enter Address: ");
    gets(p.address);
    fflush(stdin);
    printf("Enter phone number: ");
    gets(p.phone);
    
    printf("\nPid = %d\nName = %s\nAddress = %s\nPhone Number = %s", p.Pid, p.name, p.address, p.phone);
    return 0;
}