#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *str = "Hello, echo!!";

    write(1, str, 13);
    exit(1);
    return 0;
}
