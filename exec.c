#include <stdio.h>
/*
  需要注意的是exec并不是1个函数, 其实它只是一组函数的统称, 它包括下面6个函数:
  #include <unistd.h>
  int execl(const char *path, const char *arg, ...);
  int execlp(const char *file, const char *arg, ...);
  int execle(const char *path, const char *arg, ..., char *const envp[]);
  int execv(const char *path, char *const argv[]);
  int execvp(const char *file, char *const argv[]);
  int execve(const char *path, char *const argv[], char *const envp[]);
*/

int main(){
    char *argv[3];
    argv[0] = "echo";
    argv[1] = "hello";
    argv[2] = 0;
    execv("/bin/echo",argv);
    printf("exec error!\n");
    return 0;
}
