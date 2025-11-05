//this file contains code to implement atomic Swap() operation at the hardware level.
//atomic operation convinces that either an operation is completed or not done at all, this prevents race condition.

#include<stdio.h>
#include<stdbool.h>
#include<pthread.h>
#include<unistd.h>

bool lock = false;
int var = 0;

void Swap(bool *lock , bool *key){
    bool *temp = *lock;
    *lock = *key;
    *key = temp;
}

void p1(){
    while(1){
        bool key = true;
        while(key == true){
            Swap(lock , key);
        }
        var++;
        lock = false;
    }
}

void p2(){
    while(1){
        bool key = true;
        while(key == true){
            Swap(lock , key);
        }
        var--;
        lock = false;
    }
}

