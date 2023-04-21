#include <stdio.h>
#include <stdlib.h>

struct student{
     int id;
     int grade;
     char name[20];
   };

    void input_records(  struct student *stu_ptr)
    {
      for (int i=0; i<10; i++)
      {
        printf("Enter your id: ");
        scanf("%d",&stu_ptr->id);
        printf("Enter your grade: ");
        scanf("%d",&stu_ptr->grade);
        printf("Enter your name: ");
        scanf("%s",stu_ptr->name);
        stu_ptr++;
      }
    }

    void display_records( struct student *stu_ptr)
        {
            for(int i=0; i<10 ; i++)
            {
                printf("id = %d \n",stu_ptr->id);
                printf("grade = %d \n",stu_ptr->grade);
                printf("name= %s \n",stu_ptr->name);
                stu_ptr++;
            }
        }


int main()
{
    struct student stu_records[10];
    struct student * stu_ptr;
    stu_ptr =stu_records;
    input_records(stu_ptr);
    display_records(stu_ptr);
}
