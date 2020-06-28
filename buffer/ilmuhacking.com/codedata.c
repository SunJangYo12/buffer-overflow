/*  gcc codedata.c -o codedata -fno-stack-protector -z execstack    */
#include <stdio.h>

char str[] = "ABCHIJK\xc3";

int main(void) {
        printf("%s\n",str); // str as argument of printf()
        ((void (*)(void))str)(); // str()
        return 0;
}
