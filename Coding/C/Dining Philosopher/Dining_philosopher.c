#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#define num_philosophers 5
#define num_chopsticks 5

void dine(int n);
pthread_t philosopher[num_philosophers];
pthread_mutex_t chopstick[num_chopsticks];

int main()
{
    int i, statusmsg;
    void *msg;
    for(i=1;i<=num_chopsticks;i++)
    {
        statusmsg=pthread_mutex_init(&chopstick[i], NULL);
        if(statusmsg!=0)
        {
            printf("\nMutex initialization failed");
            exit(1);
        }
    }

    for(i=1;i<=num_philosophers;i++)
    {
        statusmsg=pthread_create(&philosopher[i],NULL,(void *)dine, (int *)i);
        if(statusmsg!=0)
        {
            printf("\nThread creation failed");
            exit(1);
        }
    }      
    
    for(i=1;i<=num_philosophers;i++)
    {
        statusmsg=pthread_join(philosopher[i],&msg);
        if(statusmsg!=0)
        {
            printf("\nThread join failed");
            exit(1);
        }
    }

    for(i=1;i<=num_chopsticks;i++)
    {
        statusmsg=pthread_mutex_destroy(&chopstick[i]);
        if(statusmsg!=0)
        {
            printf("\nMutex destroyed");
            exit(1);
        }
    }
    return 0;
}

void dine(int n)
{
    printf("Philosopher %d is thinking\n",n);
    pthread_mutex_lock(&chopstick[n]);
    pthread_mutex_lock(&chopstick[(n+1)%num_chopsticks]);
    printf(" Philosopher %d is eating\n",n);
    sleep(3);
    pthread_mutex_unlock(&chopstick[n]);
    pthread_mutex_unlock(&chopstick[(n+1)%num_chopsticks]);
    printf("Philosopher %d finished eating",n);
}
