#include <stdio.h>

void fungsi(int satu, int dua)
{
    int buffer[2];
    int *tmp;

    tmp = buffer + 3; // Jarak ke RET 3*4 byte
    *tmp = *tmp + 10;
}

int main()
{
    int a;
    a = 1;

    fungsi(1, 2);

    a = 2; // Intruksi a = 2 akan dilompati

    printf("%d\n", a);
    return 0;
}
