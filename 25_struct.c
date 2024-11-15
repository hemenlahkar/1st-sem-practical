#include <stdio.h>
/*Write a program to implement struct in C.
Create a structure of Student with RNo, Name and
other credentials with proper dayatype and print the same*/

typedef struct student
{
    int Rno;
    char name[30];
    char samarthEnr[50];
    char phone[11];
} Student;

int main()
{
    Student s1;
    printf("Enter the name of the student: ");
    scanf("%[^\n]", &s1.name);
    printf("Enter his roll no.: ");
    scanf("%d", &s1.Rno);
    fflush(stdin);
    printf("Enter his samarth enrollment number: ");
    scanf("%[^\n]", &s1.samarthEnr);
    fflush(stdin);
    printf("Enter his phone number: ");
    scanf("%[^\n]", &s1.phone);
    printf("\nName: %s\nRoll no.: %d\nSamarth Enrollment number: %s\nPhone number: %s", s1.name, s1.Rno, s1.samarthEnr, s1.phone);
    return 0;
}