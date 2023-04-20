#include <stdio.h>
#include <stdlib.h>

struct student {
    int Id;
    char Name[50];
    int Grade;
} s[10];

void print(struct student s[],int b)
{
    for (int i = 0; i < 10; ++i)
    {
        printf("\nId number: %d\n",s[i].Id);
        printf(" Name: %s\n",s[i].Name);
        printf("Grade: %d\n", s[i].Grade);
    }
}
int main()
{
    printf("Enter information of students:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Id :");
        scanf("%d", &s[i].Id);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter marks: ");
        scanf("%d", &s[i].Grade);
    }
    printf("Print All Records:\n");
    print(s,10);

    return 0;
}
