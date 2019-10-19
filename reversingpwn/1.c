#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
     int j = 0xcafebabe;
     char str[12];

     if (argc > 1) {
        strcpy(str, argv[1]);
     }

     printf("nilai j adalah 0x%x\n", j);
}
