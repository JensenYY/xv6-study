#include<stdio.h>
#include<fcntl.h>

int main(){
    char *argv[2];
    argv[0] = "cat";

    if(fork() == 0){
        close(0);
        open("./input.txt",O_RDONLY);
        execv("./cat",argv);
    }
    return 0;
}
