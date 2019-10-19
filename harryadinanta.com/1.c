#include <string.h>
#include <stdio.h>

void fungsiCopyString(char *inputUser)
{
    char tempVar[64]; //declare variable sementara sebesar 64 byte yang akan menampung data dari user
    printf("user:%s\n", inputUser);

    strcpy(tempVar, inputUser); //lakukan copy data dari user ke variable sementara
    printf("copy:%s\n", tempVar);
}

int main(int argc, char **argv)
{
    fungsiCopyString(argv[1]);
}
