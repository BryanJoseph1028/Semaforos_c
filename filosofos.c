#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
//valor 0  es que esta libre
//valor 1 es que esta en uso por aristoteles
//valor 2 es que esta en uso por socrates
struct Palillo{
	int valor;
	char nombre;
};
struct Palillo palillo1;
struct Palillo palillo2;
palillo1.valor=0;
palillo2.valor=0;void * comer(void * arg){
	//Verificar si palillo1 esta libre
	if( palillo1.valor == 0){
		palillo1.nombre=(char*)arg;            palillo1.valor = 1;	}
	//Verificar si palillo2 esta libre
	if(palillo2.valor == 0){
	
		palillo2.nombre=(char*)arg;            palillo2.valor = 1;	}
	if(palillo1.valor ==1 &&  palillo2.valor==1  && palillo1.nombre==palillo2.nombre){
		printf("%s Comiendo\n",(char*) arg);
	}else{
		printf("%s Esperando...\n",(char*) arg);
	}
}
int main(){	//Declarando procesos de filosofos
	pthread_t aristoteles;
	pthread_t socrates;
	//inicializando procesos de filosofos
	pthread_create(&aristoteles, NULL, comer, "Aristoteles");
	pthread_create(&socrates, NULL, comer, "Socrates");
	//Control de hilos
	pthread_join(aristoteles, NULL);
	pthread_join(socrates, NULL);
	return 0;
}