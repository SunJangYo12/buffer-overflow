// aktif: $ sudo sysctl -w kernel.randomize_va_space=2
// mati : $ sudo sysctl -w kernel.randomize_va_space=0

#include <stdio.h>

int main(void)
{
   int i;
   printf("Alamat dari i = %p\n", &i);
}
