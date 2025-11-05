

#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>

#define N 5

sem_t chopsticks[N];
sem_t room;

void* philosopher(void *args){
    int i  = *(int*)args;

    while(1){
        printf("Philospher %d is trying to aquire chopsticks" , i);
        sem_wait(&room);
        sem_wait(&chopsticks[i]);
        sem_wait(&chopsticks[(i+1) % N]);

        //eat()
        //CRITICAL SECTION
        printf("Philospher %d is eating" , i);
        sleep(1);

        sem_post(&chopsticks[i]);
        sem_post(&chopsticks[(i+1) % N]);
        sem_post(&room);

        //think()
        printf("Philospher %d is thinkiing" , i);
        sleep(1);
    }

    return NULL;
}

int main(){
    pthread_t threads[N];
    int philosopher_ids[N];

    sem_init(&room , 0 , N-1);

    for(int i = 0; i < 5; i++){
        philosopher_ids[i] = i;
        sem_init(&chopsticks[i] , 0 , 1);
    }

    for(int i = 0; i < 5; i++){
        pthread_create(&threads[i] , NULL , philosopher , &philosopher_ids[i]);
    }

    for(int i = 0; i < 5; i++){
        pthread_join(threads[i] , NULL);
    }

    return 0;

}

