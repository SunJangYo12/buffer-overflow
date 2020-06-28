#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    char* args[] = {"/bin/sh", NULL};

    setreuid(0, 0);
    execve("/bin/sh", args, NULL);
}
