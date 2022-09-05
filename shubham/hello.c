#include <stdio.h>

int main()
{
    int arr[100] = {0};

    int x, pos, n = 10;

    for (int i = 0; i < 50; i++)
    { // initial array of size 10
        arr[i] = i + 1;
    }
    // print the original array
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    x = 10;
    pos = 10;
    n++;

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
        arr[pos - 1] = x;
    }
    // print the updated arrray
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
