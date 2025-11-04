//BOUNDED BUFFER PROBLEM
//this file contains solution to the problem of concurrent access to a shared memory  location by producer and consumer
//this solution uses synchornization primitive to solve this probelem, it uses a shared variable `counter`
// this solution has loopholes, which can lead to race condition due to concurent access by both producer and consumer.

#include<stdio.h>
#include<pthread.h>
#include<stdbool.h>
#define SIZE 10

typedef struct  item{
    int val;
} it;

it buffer[SIZE];
int in = 0,out = 0 ,counter = 0;

void producer(it* x){
    //while(((in + 1) % SIZE) == out);
    while(counter == SIZE);
    buffer[in] = *x;
    in = (in + 1) % SIZE;
    counter++;    
}

it consumer(){
    //while(out == in);
    while(counter == 0);
    it itemPopped = buffer[out];
    out = (out + 1) % SIZE;
    counter--;
    return itemPopped;
}

void* producerThread(void* args){
    for(int i = 0; ; i++){
        it I;
        I.val = i;
        producer(&I);
        printf("Produced item = %d | counter =%d\n" , I.val , counter);
    }

    return NULL;
}

void* consumerThread(void * args){
    while(true){
        it itemPopped = consumer();
        printf("Consumed item = %d | counter = %d\n" , itemPopped.val , counter);
    }

    return NULL;
}

int main(){
    pthread_t pros , cons;

    pthread_create(&pros , NULL , producerThread, NULL);
    pthread_create(&cons , NULL , consumerThread, NULL);
    
    pthread_join(pros , NULL);
    pthread_join(cons , NULL);
}