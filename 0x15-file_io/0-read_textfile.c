
#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the
 *POSIX standard output
 *@filename:pointer to file description
 *@letters:number of letters it should read and print
 *Return:actual no. of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
    int num ; 
    unsigned long  int bytes ;
    long  int bytes2 ;
    char *buffer;
    if (filename == NULL ||  letters == 0)
        return (0);
     num = open(filename , O_RDONLY , 0);
     if (num == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    bytes = read(num , buffer , letters);

    if (bytes !=  letters)
        return (0);
    buffer[bytes + 1 ] = '\0';

    bytes2 = write( STDIN_FILENO ,buffer, letters);

    
    free(buffer);
    close(num);

    return (bytes2);
}



