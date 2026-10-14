#include <stdio.h>
#include<conio.h>
int main()
{
    int arr[3] = {5, 10, 15};
    int n;
    int (*ptr)[3];
    int i;

    n = sizeof(arr) / sizeof(arr[0]);

    ptr = &arr;

    for (i = 0; i < n; i++)
    {
        printf("%d ", (*ptr)[i]);
    }

    return 0;
}
