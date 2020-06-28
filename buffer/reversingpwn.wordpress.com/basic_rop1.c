#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char sh[8];

void execsh()
{
    system(sh);
}

void addbinsh()
{
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
