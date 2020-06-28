#include <stdio.h>

void fungsi(char* txt)
{
    char buffer[4];
    strcpy(buffer, txt);
}

int main()
{
    char buffer[17];
    int i;

    for (i=0; i<16; i++)
       buffer[i] = 0x19;

    fungsi(buffer);
    return 0;
}
