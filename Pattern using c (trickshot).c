#include <stdio.h>
#include <string.h>
int main()
{
    for (int i = 1; i <= strlen("Yo my boy Nahid"); i++)
    {
        printf("%.*s\n", i, "Yo my boy Nahid");
    }
    return 0;
}