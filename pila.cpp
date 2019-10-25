#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregar(Nodo *&,int);
void sacar(Nodo *&,int &);

int main(int argc, char** argv) {
	Nodo *pila=NULL;
	
	int opcion, add, dato;
	char rpt;
	do{
	cout<<"\nMENU"<<endl;
	cout<<"1. Llenar Pila"<<endl;
	cout<<"2. Eliminar de la pila"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opcion;
	switch (opcion){
        case 1:
        do{
		cout<<"Digite numero: ";
		cin>>dato;
		agregar(pila,dato);
		
	cout<<"Desea agregar otro elemento (s/n) : ";
	cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
			break;
        case 2:
        		cout<<"Eliminando elementos : ";
            while(pila!=NULL){
		sacar(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
            break;
        case 3:
        	cout<<"Salir";
        default:
            cout<<"Gracias"<<endl;
            break;
    }
	
	
	

	
	
	
}while(opcion!=3);
	 return 0;
}
void agregar(Nodo *&pila,int n){
	Nodo *nuevoNodo= new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
	cout<<"El elemento  "<< n <<"  a sido agregado ";
} 
void sacar(Nodo *&pila,int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
