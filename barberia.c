#include <stdio.h>
#include <semaphore.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

sem_t semaforo;
int d = 1;
void* cliente(void* arg){    
    while(1){
    sem_wait(&semaforo);
    if(d == 0)  { 
        sem_post(&semaforo);
        break;

    }   
    printf("%s esta sentado en la silla\n", (char*)arg);
    sleep(6);
    sem_post(&semaforo);
    sleep(1);
    sleep(rand() % 5);
      
    }
}

void* barbero(void* arg){
    
    printf("%s el barbero esta atendiendo al cliente\n", (char*)arg);
    sleep(10);
    d = 0;
   printf("%s el barbero ya termino \n", (char*)arg);
}

int main(){
sem_init(&semaforo,0,1);
pthread_t jose;
pthread_t pablo;
pthread_t lucas;
pthread_t chino;

pthread_create(&jose, NULL, cliente, "jose");
pthread_create(&pablo, NULL, cliente, "pablo");
pthread_create(&lucas, NULL, cliente, "lucas");
pthread_create(&chino, NULL, barbero, "chino");


pthread_join(jose, NULL);
pthread_join(pablo, NULL);
pthread_join(lucas, NULL);
pthread_join(chino, NULL);
sem_destroy(&semaforo);
return 0;
}
