#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50], search[50];
    int n, i, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter search key: ");
    scanf("%s", search);

    printf("\nComparison Process:\n");

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], search) == 0)
        {
            printf("%s = %s\n", str[i], search);
            printf("Position = %d\n", i + 1);
            found = 1;
            break;
        }
        else
        {
            printf("%s != %s\n", str[i], search);
        }
    }

    if(found == 0)
    {
        printf("String not found");
    }

    return 0;
}
