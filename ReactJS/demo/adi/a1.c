#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int temp, length;
    printf("enter any string\n");
    gets(str);
    length = strlen(str);
    length = length - 1;
    temp = 0;
    while (temp > 0)
    {
        if (str[length] != str[temp])
        {
            printf("%sis not palindrome\n", str);
            exit(0);
        }
        length--;
        temp++;
    }
    printf("%s is a palindrome\n", str);
}
