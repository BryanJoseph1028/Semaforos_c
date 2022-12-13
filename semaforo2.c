#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <time.h>


sem_t sem1;
time_t t;
srand((unsigned) time(&t));
void* ninio(void* arg){
    for(int i=0; i<10;i++){
    sem_wait(&sem1);
    printf("%s esta caminando sobre el paso de zebra\n", (char*)arg);
    sleep(6);
    sem_post(&sem1);
    sleep(1);
    sleep(rand() % 5)
    }
}

void* vehiculo(void* arg){
    for(int i=0; i<10;i++){
    sem_wait(&sem1);
    printf("vehiculo vienso el semafoto\n", (char*)arg);
    sleep(3);
    sem_post(&sem1);
    sleep(4);
    }
}



int main(){
sem_init(&sem,0,0);
pthread_t juan;
pthread_t p123;

pthread_create(&juan, NULL, ninio, "juan");
pthread_create(&p123, NULL, vehiculo, "p123");

pthread_join(juan, NULL);
pthread_join(p123, NULL);
sem_destroy(&sem1);
return 0;
}
