#include<stdio.h>
#include<sys/mman.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char** argv){

    int fd = open("./sometext.txt",O_RDWR, S_IRUSR | S_IWUSR);
    struct stat sb;

    if (fstat(fd, &sb) == -1){
        perror("Could not get the file size. \n");
    }
    printf("File size is %lu\n",sb.st_size);

    char* file_in_memory = mmap(NULL, sb.st_size, PROT_READ | PROT_WRITE,
                       MAP_SHARED, fd,0);
    // MAP_SHARED will allow us to write back to the file 
    //  the changes that we make to the memory mapped will not be shared by the rest
    //  of the system in other word it will not be written back to the file.


    for (int i=0; i< sb.st_size; i++){
        if (i%2 == 0){
          file_in_memory[i]=toupper(file_in_memory[i]);
        }
        printf ("%c", file_in_memory[i]);

    }
    // everything that is there in the meory will be written back to the file 
    // no explicit write.
    printf ("\n\n");
    munmap(file_in_memory, sb.st_size);


}
