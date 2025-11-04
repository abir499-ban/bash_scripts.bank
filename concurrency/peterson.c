//this program demostrates the working of Peterson solution which is a software based solution to the critical section problem involving two processes.



#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include<pthread.h>

int var = 0;
bool flag[2] = {false , false};
int turn;


void process(int i){
    int j = 1-i;
    flag[i] = true;
    turn = j;

    while(flag[j] && turn == j);
    //CRITICAL SECTION
    if(i == 0) var++;
    else var--;

    //EXIT
    flag[i] = false;
}

void* run_thread(void* args){
    int i = *(int*)args;
    while(true){
        process(i);
    }
}

int main(){
    pthread_t p1,p2;
    
    int a = 0,b = 1;
    pthread_create(&p1 , NULL , run_thread , &a);
    pthread_create(&p2 , NULL , run_thread , &b);

    pthread_join(p1 ,NULL);
    pthread_join(p2 ,NULL);
}