#include<stdio.h>

int main(){
    if(fork() == 0){
        write(1,"hello",6);
        exit(0);
    }else{
        //这段代码的结尾，绑定在文件描述符1上的文件的数据有
        //“helloworld!”
        //因为wait，这里父进程会等待子进程运行完才会从子进程
        //write结束的地方开始写
        wait();
        write(1,"world!",6);
    }
    return 0;
}
