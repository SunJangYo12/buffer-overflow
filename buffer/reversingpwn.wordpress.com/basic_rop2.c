#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char sh[8];

void execsh(int y)
{
    if (y == 0xfacebabe)
       system(sh);
}

void addbinsh(int x)
{
    if (x == 0xdeadbeef)
       strcpy(sh, "/bin/sh");
}

void vuln()
{
    char buf[20];
    printf("Masukan nama : ");
    gets(buf);
    printf("Selamat datang %s\n", buf);
}

int main()
{
    vuln();
}
