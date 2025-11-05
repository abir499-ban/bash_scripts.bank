//this file contains code to implement atomic Test&Set() operation at the hardware level.
//atomic operation convinces that either an operation is completed or not done at all, this prevents race condition.

#include<stdio.h>
#include<stdbool.h>
#include<pthread.h>
#include<unistd.h>

bool lock = false;
int var = 0;

bool Test_and_Set(bool *lock){
    bool rv = *lock;
    *lock = true;
    return rv;
}

void p1(){
    while(1){
        while(Test_and_Set(&lock));
        //CRITICAL_SECTION
        var++;
        lock = false;
        println("Exiting critical section");
    }
}

void p2(){
    while(1){
        while(Test_and_Set(&lock));
        //CRITICAL_SECTION
        var--;
        lock = false;
        println("Exiting critical section");
    }
}


//driver code



