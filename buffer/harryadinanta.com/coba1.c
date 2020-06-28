#include <string.h>

void FungsiCopyString(char *inputUser)
{
    char tmpVar[64];
    strcpy(tmpVar, inputUser);
}

int main(int argc, char **argv)
{
    FungsiCopyString(argv[1]);
}
