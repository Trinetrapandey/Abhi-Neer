#include <stdio.h>
#include <math.h>
int main()
{
    int p, t;
    float ci, si, amount, r;
    printf("enter the value of p,r,t\n");
    scanf("%d%f%d", &p, &r, &t);
    si = p * r * t / 100;
    printf("si is %d\n", si);
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("ci is %.2f\n", ci);
    return 1;
}
