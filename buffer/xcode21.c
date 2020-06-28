#include <stdio.h>

char *sandi = "12345";

int login() {
   char pass[15];
   printf("Masukkan Sandi: ");
   gets(pass);

   if (!strcmp(pass, sandi))
     return 1;
   else
     return 0;
}

int main() {
   if (login()) {
      printf("Selamat, anda berhasil login\n");
   }
   else {
      printf("Sandi yang anda masukkan salah\n");
   }

   return 0;
}
