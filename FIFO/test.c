#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

const int BUF_SIZE = 1024;

int main (int argc, char** argv)
{
    struct stat *buf = (struct stat*) calloc (1, sizeof (struct stat));

    int fd1 = ("input", O_RDWR);
    printf ("link result: %d\n", link ("input", "new_input"));
    int fd2 = ("new_input", O_RDWR);

    printf ("fd1 = %d\nfd2 = %d\n", fd1, fd2);

    printf ("fstat result = %d\n", fstat (fd1, buf));
    printf ("fd1 inode_number: %lu\n", buf -> st_ino);
    printf ("fstat result = %d\n", fstat (fd2, buf));
    printf ("fd2 inode_number: %lu\n", buf -> st_ino);

    free (buf);
    return 0;
}


/*mkfifo ("fifo", 0666);
int fd = open ("fifo", O_RDWR);
write (fd, "aaa", 3);
//close (fd);
fd = open ("fifo", O_RDONLY);
write (STDOUT_FILENO, buf, read (fd, buf, 3));*/
