#include <assert.h>
#include "str2int.h"
#include "stdio.h"
#include <stdlib.h>

int main()
{
    char str[12];
    char* endptr;

    gets(str);
    long ans = strtol(str, &endptr, 10);
    if ((ans > 2147483647) || (ans < -2147483648))
    return 0;
    printf("%ld", ans);
}