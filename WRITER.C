#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    
    printf("Hello World today!!");
    
   
    printf("Opening\n");
    
    int arr[5];
    for(int i=0;i<5;i++)
    {
       arr[i]=i;
     }
    int a=open("fifo_write.c",O_WRONLY);
    for(int i=0;i<5;i++){
    write(a,&arr[i],sizeof(int));
    }
    printf("Sent the numbers");
    close(a);

    return 0;
}