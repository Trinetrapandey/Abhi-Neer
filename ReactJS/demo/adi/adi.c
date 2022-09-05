#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the value of x and y\n");
    scanf("%d%d", &x, &y);
    printf("before swaping value of x and y is%d%d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("after swaping value of x and y is %d%d\n", x, y);
}