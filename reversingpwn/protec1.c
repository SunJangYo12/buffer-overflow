#include <stdio.h>

/*
* sudo sysctl -w kernel.randomize_va_space=0 // mati
* sudo sysctl -w kernel.randomize_va_space=2 // hidup
*/

int main() {
     int i;
     printf("Alamat dari i = %p\n", &i);
}
