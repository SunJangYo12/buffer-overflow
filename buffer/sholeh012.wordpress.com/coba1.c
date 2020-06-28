#include <stdio.h>

void fungsi(int satu, int dua)
{
    int buffer[2];
    buffer[0] = satu;
    buffer[1] = dua;
}

int main()
{
    fungsi(1, 2);
    return 0;
}
