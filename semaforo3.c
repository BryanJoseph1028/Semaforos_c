#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

sem_t sem1;
int d = 1;
void* ninio(void* arg){    
    while(1){
    sem_wait(&sem1);
    if(d == 0)  { 
        sem_post(&sem1);
        break;

    }   
    printf("%s esta caminando sobre el paso de zebra \n", (char*)arg);
    sleep(6);
    sem_post(&sem1);
    sleep(1);
    sleep(rand() % 5);
      
    }
}

void* vehiculo(void* arg){
    for(size_t i=0; i<10;i++){
    sem_wait(&sem1);
    printf("%s vehiculo vienso el semafoto\n",(char*)arg);
    sleep(3);
    sem_post(&sem1);
    sleep(4);
    }
}

void* policia(void* arg){
    
    printf("%s vehiculo vienso el semafoto \n", (char*)arg);
    sleep(10);
    d = 0;
   printf("%s el policia esta deteniendo al niño \n", (char*)arg);
}

int main(){
sem_init(&sem1,0,1);
pthread_t juan;
pthread_t pablo;
pthread_t bryan;
pthread_t p123;
pthread_t pmt;

pthread_create(&juan, NULL, ninio, "juan");
pthread_create(&pablo, NULL, ninio, "pablo");
pthread_create(&bryan, NULL, ninio, "bryan");
pthread_create(&p123, NULL, vehiculo, "p123");
pthread_create(&pmt, NULL, policia, "pmt");

pthread_join(juan, NULL);
pthread_join(pablo, NULL);
pthread_join(bryan, NULL);
pthread_join(p123, NULL);
pthread_join(pmt, NULL);
sem_destroy(&sem1);
return 0;
}
