#include <stdio.h>
#include <stdlib.h>

char data[] = {0xc3};
char data2[] = { 0xb8, 0x2a, 0x00, 0x00, 0x00, 0xc3};

void (*f)(void);
int (*g)(void);

int main()
{
    f = data;
    f();

    g = data2;
    printf("g = %d\n", g());

    return 0;
}
