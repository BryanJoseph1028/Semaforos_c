#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>//0 es sin uso
//1 es usando palillo en uso por socratesstruct Palillo{
	int valor;
	char nombre[20];
};struct Filosofo{
char nombre[20];
int silla;
};struct Palillo palillo[35];
struct Filosofo filo[5];/*
*
* Algoritmo
* 0) Inicio
* 1) Verificar que palillo 1 este libre
* 2) Tomar Palillo 1( estado = 1)
* 3) Verificar que palillo 2 este libre
* 4) Tomar Paillo 2 ( estado = 1)
* 5) Comer si los 2 palillos fueron tomados
* 6) Fin
*
*
* Pseudocodigo
* 1) Si palillo 1 = 0 entonces palillo 1 = 1
* 2) Si palillo 2 = 0 entonces palillo 2 =1
* 3) Si palillo 1 y palillo 2 = 1 entonces comer sino esperar 4s
*
**/void* comer(void* arg ){		
    int i = ((struct Filosofo*)arg)->silla;
		if(palillo[((struct Fiosofo*)arg)->silla].valor==0){
			palillo[((struct Filosofo*)arg)->silla].valor=1;
			strcpy(palillo[i].nombre,((struct Filosofo*)arg)->nombre);
		}
		if(palillo[i+1 % 5].valor==0){
			palillo[i+1 % 5].valor=1;
			strcpy(palillo[i].nombre,((struct Filosofo*)arg)->nombre);
		}		if(palillo[i].valor == palillo[i+1 % 5].valor
		&& (strcmp(palillo[i].nombre,palillo[i+1 % 5].nombre) == 0
		&& strcmp(((struct Filosofo*)arg)->nombre,palillo[i]->nombre) == 0)){
			printf("%s Comiendo\n", ((struct Filosofo*)arg)->nombre);
		}else{
			printf("%s Esperando\n", ((struct Filosofo*)arg)->nombre);
		}	//Verificar palillo1 esta libre
	/*if (palillo1.valor == 0){
		//copiar el nombre del filosofo al campo nombre de cada palillo
		strcpy(palillo1.nombre, (char*)arg);
		//Tomar palillo1
		palillo1.valor = 1;
	}
	//Verificar palillo2 esta libre
	if(palillo2.valor == 0){
		//asignar nombre al campo
		strcpy(palillo2.nombre,(char*)arg);
		//Tomar palillo2
		palillo2.valor = 1;		//Se coloco esta instruccion para ver quien  tomo el palillo
	}
	//Si palillo 1 y 2 fueron tomados comer
	if(palillo1.valor == palillo2.valor && palillo1.nombre == palillo2.nombre){
		printf("%s Comiendo\n", (char*) arg);
	} else{
		printf("%s Esperando...\n", (char*) arg);
	}*/
}int main(){
	strcpy(filo[0].nombre,"Aristoteles");
	strcpy(filo[1].nombre,"Socrates");
	strcpy(filo[2].nombre,"Descartes");
	strcpy(filo[3].nombre,"Pitagoras");
	strcpy(filo[4].nombre,"Platon");	
    
    for(int i=0;i<5;i++){
		filo[i].silla=i;
	}
	//Inicializar os palillos en 0(libres)
	for(int i=0;i<5;i++){
		palillo[i].valor=0;
	}
	//Declarando procesos Filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	pthread_t descartes;
	pthread_t platon;
	pthread_t pitagoras;	//Inicializar procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, &filo[0]);
	pthread_create(&socrates, NULL, comer, &filo[1]);
	pthread_create(&socrates, NULL, comer, &filo[2]);
	pthread_create(&socrates, NULL, comer, &filo[3]);
	pthread_create(&socrates, NULL, comer,  &filo[4]);	//Control de Hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	pthread_join(descartes, NULL);
	pthread_join(platon, NULL);
	pthread_join(pitagoras, NULL);
    	return 0;
        }
