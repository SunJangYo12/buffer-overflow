// compile: gcc -fstack-protector -o canaries canaries.c
// jika program crach akan muncul "*** stack smashing detec... **
// tandanya canaris aktif jika dicek make assembly ada
// tambahan banyak code pengaman

#include <stdio.h>
#include <string.h>

void vuln(char *zz)
{
   char buf[24];
   strcpy(buf, zz);
}

int main(int argc, char** argv)
{
   if (argc > 1) vuln(argv[1]);
}
