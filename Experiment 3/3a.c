#include <stdio.h>

int main()
{
    int a[100], n, i, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the data to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Data found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Data not found");
    }

    return 0;
}
