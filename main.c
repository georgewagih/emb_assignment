#include <stdio.h>
#include <stdlib.h>
struct student{
char* student_name;
int std_id,day,month,year,last_score;
};
void get_data(struct student* std);
int main()
{
    printf("Welcome to our student system... \n\n\n");

return 0;
}
void get_data(struct student* std)
{
    printf("Enter student name: ");
    int length=1;
    char y;
    char* str=NULL;
    std->student_name=NULL;
    do
     {
      scanf("%c",&y);
      str=std->student_name;
      std->student_name=(char*)malloc(length);
      *(std->student_name+(length-1))=y;
      for(int i=0;i<=length-2;i++)
         {*(std->student_name+i)=*(str+i);}
      free(str);
      length++;
     }
    while(y!='\n');
    *(std->student_name+(length-2))='\0';

    printf("Enter student id: ");
    scanf("%d",&(std->std_id));

    printf("Enter student date of birth(DD MM YYYY): ");
    scanf("%d",&(std->day));
    scanf("%d",&(std->month));
    scanf("%d",&(std->year));

    printf("Enter student last score: ");
    scanf("%d",&(std->last_score));
    }


