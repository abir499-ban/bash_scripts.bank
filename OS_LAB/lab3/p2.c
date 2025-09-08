#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    if(fork() || fork()){
        fork();
    }

    printf("Hello World\n");
}

// output:
// Hello World
// Hello World
// Hello World
// Hello World
// Hello World