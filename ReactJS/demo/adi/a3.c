#include <stdio.h>
int main()
{
    int year;
    printf("enter check year\n");
    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        ;
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not leap year\n");
    }
}