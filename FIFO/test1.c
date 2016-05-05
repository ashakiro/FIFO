#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

const int BUF_SIZE = 1024;

int main (int argc, char** argv)
{
    int fd = open ("fifo", O_WRONLY);
    printf ("%d\n", fd);
    write (fd, "TEST", 4);
    //printf ("%d\n", unlink ("fifo"));

    return 0;
}
