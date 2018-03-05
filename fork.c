#include <stdio.h>

int main(){
    int pid;
    /*
     * fork()创建进程，子进程内容同父进程相同。fork()一次创建两次返回，
     * 在父进程中返回子进程的id，在子进程中返回0.
     */
    pid = fork();
    if(pid > 0){
        printf("parent: children %d\n",pid);
        pid = wait();
        printf("child %d is done\n",pid);
    }else if(pid == 0){
        printf("child: exiting\n");
        exit(-1);
    }else{
        printf("fork error\n");
    }
    return 0;
}
