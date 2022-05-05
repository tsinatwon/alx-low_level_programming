#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);


 size_t byte_transfer;
 int num;




int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
    




ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t byte_transfer;
    num = open(filename , O_RDWR ,0 );
    if (num == -1)
    return 0;

    byte_transfer = read(num ,1 ,  letters);

    if (byte_transfer != letters)
        return (0);
    else 
        return byte_transfer;





}
