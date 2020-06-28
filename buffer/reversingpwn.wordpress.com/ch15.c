// # NOTE: shellcode tidak cocok exploit.py

// shellcode dimana kita tidak membuat
// fungsi untuk memanggil system melainkan
// dikirim langsung melalui shellcode yang
// bisa memanggil "/bin/sh"

/*
   $ (python exploit.py ; cat -) | ./ch15
*/
#include <stdio.h>

void vuln()
{
    char buf[52];
    printf("Masukan nama anda: ");
    gets(buf);
    printf("Selamat datang %s\n", buf);
    printf("%p\n", buf);
}

int main(int argc, char** argv)
{
    vuln();
}
