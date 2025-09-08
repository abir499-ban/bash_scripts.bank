#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

    pid_t pid = fork();

    if(pid < 0){
        printf("Error\n");
        _exit(1);
    }

    if(pid == 0){
        printf("Hello from child process\n");
        printf("PID : %d , Parent PID : %d\n" , getpid() , getppid());
    }else{
        wait(NULL);
        printf("Hello from parent process\n");
        printf("PID : %d\n" , getpid());
        fork();
    }
    printf("Program ended\n");
}

// output:
// Hello from child process
// PID : 5062 , Parent PID : 5061
// Program ended
// Hello from parent process
// PID : 5061
// Program ended
// Program ended