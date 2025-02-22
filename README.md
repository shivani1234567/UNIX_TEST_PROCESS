# UNIX_TEST_PROCESS
In this i have created two files .One is reader. and another writer.c.
First we need to create a file using mkfifo.
Then run the reader.c using :
        gcc reader.c -o read
        ./read
After this reader will get hung ,it will wait for writers input.
Then run writer.c using :
        gcc writer.c -o write
        ./write
 Writer will execute well .

 It will send some numbers and we can see on readers end.This is just a basic example of how interprocess communication works.
