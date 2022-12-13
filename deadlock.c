#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <unistd.h>

//valor esta libre
//valor esta en uso
struct Palillo{
int valor;
char nombre[20];
};

struct Filosofo{
char nombre[20];
int edad;
int silla;
};

struct Palillo palillo[5];
struct Filosofo filos[5];

void* comer(void* arg){//me

int i = ((struct Filosofo *) arg)->silla;
if (palillo[((struct Filosofo *) arg->silla)].valor == 0){
	palillo[i].valor = 1;
	strcpy(palilo[i].nombre,((struct Filosofo*)arg)->nombre;
}

if(palillo[i+1 % 5.valor==0]){
	palillo[i+1].valor=1;
	strcpy(palilo[i].nombre,((struct Filosofo*)arg)->nombre;

}
if (palillo[i].valor == palillo2[i].valor && palillo1[i].nombre==palillo2[i].nombre){
	printf("%s comiendo \n",(char*) arg);	
	}else{
	printf("%s comiendo \n",(char*) arg);
}
sleep(4); 
}//me


int main(){
strcpy(filos[0].nombre, "Aristoteles");
strcpy(filos[1].nombre, "socrates");
strcpy(filos[2].nombre, "descartes");
strcpy(filos[3].nombre, "pitagoras");
strcpy(filos[4].nombre, "platon");

for (int i; i<5; i++)
//variables
pthread_t aristoteles;
pthread_t socrates;
pthread_t descartes;
pthread_t pitagoras;
pthread_t platon;

//inicializando procesos
pthread_create(&aristoteles, NULL, comer, &filos[0]);
pthread_create(&socrates, NULL, comer, &filos[1]);
pthread_create(&descartes, NULL, comer, &filos[2]);
pthread_create(&pitagoras, NULL, comer, &filos[3]);
pthread_create(&platon, NULL, comer, &filos[4]);



pthread_join(aristoteles, NULL);
pthread_join(socrates, NULL);
pthread_join(descartes, NULL);
pthread_join(pitagoras, NULL);
pthread_join(platon, NULL);

}
