// control alamat untuk kendalikan fungsi vuln ke lulz
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lulz()
{
    printf("Unbelievable you break it !!\n");
    system("/bin/sh");
}

void vuln(char **zz)
{
    char buf[24];
    strcpy(buf, zz);
}

int main(int argc, char** argv)
{
    if (argc > 1)
       vuln(argv[1]);
}

/*

  dimana program ini akan memanggil fungsi lulz
diatas fungsi vuln tentunya dengan bahasa assembly

*/
