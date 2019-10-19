#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/***********************************
* gcc -m32 3.c -fno-stack-protector
* ./a.out `python -c 'print "A"*28'`

************************************/

void lulz() {
     printf("Unbelievable you break it !!\n");
     system("/bin/sh");
}

void vuln(char **zz) {
    char buf[24];
    strcpy(buf, zz);
}

int main(int argc, char** argv) {
    if (argc > 1) {
       vuln(argv[1]);
    }
}

/*

   Dalam program ini, kita akan mempelajari bagaimana memanfaatkan buffer
overflow untuk mengubah alur eksekusi program, artinya kita akan mengarahkan
program kemanapun yg kita inginkan, dan juga menguasai si program itu agar
melakukan apapun yg kita inginkan. tapi dalam program ini, tujuan kita adalah
mengalihkan arah program agar program memanggil fungsi lulz dan mendapatkan

akses shell Program diatas memanggil fungsi vuln, difungsi vuln string yg ada
di parameter pertama dikopikan kevariable buf dengan fungsi strcpy.
Seperti yg kalian tau, ini menyebabkan overflow jika inputan kita melebihi
dari ukuran variable buf.
*/
