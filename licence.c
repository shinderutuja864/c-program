#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Issue licience");
    }
    else
    {
        printf("No licience");
    }
    return 0;
}