#include <stdio.h>
int main()
{
    int x = 220, y = 20;
    printf("enter the value of x and y\n");
    printf("before swaping value of x and y is%d%d\n" x, y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("after swaping value of x and y is %d%d\n", x, y);
}