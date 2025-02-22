#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
    int arr1[5];
    int fd=open("fifo_write.c",O_RDONLY);
    int i;
    printf("Reading\n");
    for( i=0;i<5;i++)
    {
         read(fd,&arr1[i],sizeof(int));
    }
    
    for(i=0;i<5;i++)
    {
        printf("Received %d\n",arr1[i]);
    }
    
    close(fd);
    return 0;
}