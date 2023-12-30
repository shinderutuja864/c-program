#include<stdio.h>
int main()
{
    int marks;
    printf("Enter total marks");
    scanf("%d",&marks);
    if(marks>=75)
    {
        printf("Enter a grade A");
    }
    else if(marks>=60)
    {
        printf("Enter a grade B");
    }
    else if(marks>=40)
    {
        printf("Enter a grade C"); 
    }
    else if(marks<40)
    {
        printf("fail");
    }
    return 0;
}