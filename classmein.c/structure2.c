/*write a c program to calculate approx age of a student wher te student name
 date of birth and current date input will be given by the user by using structure*/
#include<stdio.h>
struct age
{   int day;
    int month;
    int year;
};

int main()
{
    char name[50];
    struct age d;
    struct age current;
    printf("Enter DOB:-\n");
    printf("Enter the Date: ");
    scanf("%d",&d.day);
    printf("Enter the month: ");
    scanf("%d",&d.month);
    printf("Enter the year: ");
    scanf("%d",&d.year);
    printf("Your Birth date is %d/%d/%d\n",d.day,d.month,d.year);

    printf("Enter curent date:-\n");
    printf("Enter the Date: ");
    scanf("%d",&current.day);
    printf("Enter the month: ");
    scanf("%d",&current.month);
    printf("Enter the year: ");
    scanf("%d",&current.year);
    printf("todays date is %d/%d/%d\n",current.day,current.month,current.year);

    if(current.day>d.day)
        printf("Your current age is %d years %d months and %d days",current.year-d.year,current.month-d.month,current.day-d.day);
    else
         printf("Your current age is %d years %d months and %d days",current.year-d.year,current.month-d.month-1,30+current.day-d.day);
    return 0;
}