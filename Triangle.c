#include <stdio.h>
#include <stdlib.h>

int main()
{
    char star = '*';
    int i,j;
    for(i = 1 ; i <= 10 ; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%c", star);
        printf("\n");
    }
    return 0;
}
