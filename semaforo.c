#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <unistd.h>

sem_t sem_1;

void* cruzarcalle(void *arg){
//wait
sem_wait(&sem_1);
//seccion
printf("%scruzando calle\n", (char*) arg);
sleep(3);

//señal
printf("%scruzando calle\n", (char*) arg);
sem_post(&sem_1);
}

int main() {
//inicializar semaforo
sem_init(&sem_1, 0 ,1);
//recursos niñio
pthread_t boy1,girl1,boy2,girl2;
//hilo
pthread_create(&boy1, NULL, cruzarcalle, "juan");
pthread_create(&girl1, NULL, cruzarcalle, "ana");
pthread_create(&boy2, NULL, cruzarcalle, "jose");
pthread_create(&girl2, NULL, cruzarcalle, "maria");

//ejecutar los hilos niños
pthread_join(boy1, NULL);
pthread_join(girl1, NULL);
pthread_join(boy2, NULL);
pthread_join(girl2, NULL);

//destruir semaforo
sem_destroy(&sem_1);
}
