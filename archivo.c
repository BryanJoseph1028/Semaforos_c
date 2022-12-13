#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void ingresar_nombre(){
	
	ofstream archivo;
	char continuar;
	archivo.open(nombe_archivo,ios::out);
	
	if (archivo.fail()){
		cout<<"No es posible abrir el archivo";
		exit(1);
	}else{
		string nombre;
		do{
			fflush(stdin);
		cout<<"Ingrese el Nombre:";
		getline(cin,nombre);
		archivo<<nombre<<endl;
		
		cout<<"Desea Agregar otro Nombre s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
		
	}
	archivo.close();
	abrir_archivo();
}
