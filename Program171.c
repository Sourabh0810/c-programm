#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd =0;
char arr[10];

fd=open("marvellous.txt",O_RDWR);

if(fd==-1)
{
printf("unable to open file\n");

}

///0  from stating position
///1  from current position
///2 from end of position

lseek(fd,5,0);
read(fd,arr,5);
printf("data from file is::");
write(1,arr,5);
close(fd);
return 0;
}