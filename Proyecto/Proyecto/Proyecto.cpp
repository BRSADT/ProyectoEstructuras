// Proyecto.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>
#include<string.h>
using namespace std;
class sucursal {
private:
	string region;
	string ciudad;
	string direccion;
	string telefono;
	string id;
public:
	sucursal * sig;
	sucursal() {
		region = "Occidente";
		ciudad = "guadalajara";
		direccion = "av. de los maestros 234";
		telefono = "123456";
		id = "1";
		sig = NULL;
	}
	sucursal(string region, string ciudad, string direccion, string telefono, string id) {
		this->region = region;
		this->ciudad = ciudad;
		this->direccion = direccion;
		this->telefono = telefono;
		this->id = id;
		sig = NULL;
	}
	void setRegion(string region) {
		this->region = region;
	}
	void setCiudad(string ciudad) {
		this->ciudad = ciudad;
	}
	void setDireccion(string direccion) {
		this->direccion = direccion;
	}
	void setTelefono(string telefono) {
		this->telefono = telefono;
	}
	void setId(string id) {
		this->id = id;
	}
	string getRegion() {
		return this->region;
	}
	string getCiudad() {
		return this->ciudad;
	}
	string getDireccion() {
		return this->direccion;
	}
	string getTelefono() {
		return this->telefono;
	}
	string getId() {
		return this->id;
	}
	void Agregar() {
		cout << "Ingresar Region" << endl;
		getline(cin, this->region);
		getline(cin, this->region);
		cout << "Ingresar Ciudad" << endl;
		
		getline(cin, this->ciudad);
		cout << "Ingresar Direccion" << endl;
		
		getline(cin, this->direccion);
		cout << "Ingresar Telefono" << endl;
		
		getline(cin, this->telefono);
		cout << "Ingresar ID" << endl;
		
		getline(cin, this->id);
	}
	void Listar() {
		cout << "Region: " << this->region << endl;
		cout << "Ciudad: " << this->ciudad << endl;
		cout << "Direccion: " << this->direccion << endl;
		cout << "Telefono: " << this->telefono << endl;
		cout << "ID: " << this->id << endl;
	}
	void Editar() {
		int opc;
		string valor;
		cout << "Ingrese la opcion que desea editar\n 1)Region\n2)Ciudad\n3)Direccion\n4)Telefono\n5)Id sucursal" << endl;
		switch (opc)
		{
		case 1:
			cout << "Ingrese la nueva region" << endl;
			getline(cin, this->region);
			break;
		case 2:
			cout << "Ingrese la nueva ciudad" << endl;
			getline(cin, this->region);
			break;
		case 3:
			cout << "Ingrese la nueva direccion" << endl;
			getline(cin, this->direccion);
			break;
		case 4:
			cout << "Ingrese el nuevo telefono" << endl;
			getline(cin, this->telefono);
			break;
		case 5:
			cout << "Ingrese el nuevo Id" << endl;
			getline(cin, this->id);
			break;
		default:
			cout << "opcion incorrecta";
			break;
		}

	}

};

class banco {
private:
	string nombre;
	string paginaWeb;
	string conmutador;
	string matriz;
	
	sucursal * pila;
public:
	banco * sig;
	banco * ant;
	banco() {
		this->nombre = "CitiBanamex";
	//	strcpy(this->nombre, "CitiBanamex");
		this->paginaWeb = "www.banamex.com";
		this->conmutador = "123456";
		this->matriz = "CDMX";
		this->sig = NULL;
		this->ant = NULL;
		pila = NULL;
}
	banco(string nombre,string paginaWeb,string conmutador,string matriz) {
		this->nombre = nombre;
	//	strcpy(this->nombre, nombre);
		this->paginaWeb = paginaWeb;
		this->conmutador = conmutador;
		this->matriz = matriz;
		this->sig = NULL;
		this->ant = NULL;
		pila = NULL;
	}
	//Setters Getters
	void setNombre(string nombre) {

		this->nombre = nombre;
	}
	void setPaginaWeb(string paginaWeb) {
		this->paginaWeb = paginaWeb;
	}
	void setConmutador(string conmutador) {
		this->conmutador = conmutador;
	}
	void setMatriz(string matriz) {
		this->matriz = matriz;
	}
	string getNombre() {
		return this->nombre;
	}
	string getPaginaWeb() {
		return this->paginaWeb;
	}
	string getConmutador() {
		return this->conmutador;
	}
	string getMatriz() {
		return this->matriz;
	}
	void agregar() {
		cout << "Ingrese nombre del Banco: " << endl;
		getline(cin, this->nombre);
		getline(cin, this->nombre);
		cout << "Ingrese pagina web del Banco: " << endl;
		getline(cin, this->paginaWeb);
		cout << "Ingrese conmutador del Banco: " << endl;
		getline(cin, this->conmutador);
		cout << "Ingrese matriz del Banco: " << endl;
		getline(cin, this->matriz);
	}
	void listar() {
		cout << "Nombre: " << this->nombre << endl;
		cout << "Pagina web: " << this->paginaWeb << endl;
		cout << "Conmutador: " << this->conmutador << endl;
		cout << "Matriz: " << this->matriz << endl;
	}
	void Editar() {
		system("cls");
		int opc;
		string valor;
		cout << "Ingrese que desea editar\n1)Nombre del banco\n2)Pagina web del banco\n3)Conmutador del banco\n4)Matriz del banco" << endl;
		cin >> opc;
		switch (opc)
		{
			
		case 1:
			cout << "Ingrese nombre del banco" << endl;
			getline(cin, valor);
			getline(cin, valor);
			this->setNombre(valor);
			break;
		case 2:
			getline(cin, valor);
			getline(cin, valor);
			this->setPaginaWeb(valor);
			break;
		case 3:	
			getline(cin, valor);
			getline(cin, valor);
			this->setConmutador(valor);
			break;
		case 4:
			getline(cin, valor);
			getline(cin, valor);
			this->setMatriz(valor);
			break;
		default:
			cout << "opcion Incorrecta" << endl;
			break;
		}
	}
	void Encolar() {
		sucursal *nodo=new sucursal();
		nodo->Agregar();
		if (pila == NULL) {
			pila = nodo;
		}
		else {
		sucursal *aux = pila;
		nodo->sig = aux;
		pila = nodo;
		}
	}
	void Desencolar() {
		
		if (pila == NULL) {
			cout << "No hay sucursales" << endl;
		}
		else {
			sucursal *aux = pila;
			sucursal *quitar = pila;
			quitar = aux;
			aux = aux->sig;
			free(quitar);
			pila = aux;
		}
	}
	void listarSucursales() {
		sucursal *aux=pila;
		if (aux == NULL) {
			cout << "No hay sucursales"<<endl;
		}
		else{
		while (aux != NULL) {
			aux->Listar();
			aux = aux->sig;
		}
		}
	}
	void buscarSucursales(){}
	void MenuSucursales() {
		int opc;
		do{
		cout << "¿Que desea hacer? \n1)Encolar\n2)Desencolar\n3)Listar\n4)Buscar\n5)Salir" << endl;
		
		cin >> opc;
		switch (opc)
		{
		case 1:
			this->Encolar();
			break;
		case 2:
			this->Desencolar();
			break;
		case 3:
			this->listarSucursales();
			break;
		case 4:
			this->buscarSucursales();
			break;
		case 5:
			cout << "" << endl;
			break;
		default:
			break;
		}
		} while (opc != 5);


	}


};
class listaaux {




};



class ListaBancos {
private:

	ListaBancos  *listaauxx;
public:
	int x = 1;
	banco * lista;
	ListaBancos() {
		lista = NULL;
	}
	
	void AgregarNodoListaAux(){}

	ListaBancos agreeegar(banco temporal, ListaBancos  listaaux)
	{
		listaaux.x = 5;
		banco *nodo = new banco();
		nodo = &temporal;
		if (listaaux.lista == NULL) {
			listaaux.lista = nodo;
		}
	
		else
		{
			banco *aux2 = listaaux.lista;
			banco *aux = listaaux.lista;
			while (aux->sig != NULL) {
				aux = aux->sig;
			}
			aux->sig = nodo;
			aux2 = aux->sig;
			aux = listaaux.lista;
			while (aux->sig->sig != NULL) {
				aux = aux->sig;
			}
			aux2->ant = aux;
			aux = aux2;
			

		}

		return listaaux;
	}
	void agregarNodo(banco *temporal) {
		banco *nodo = new banco();
		*nodo = *temporal;
		if (lista == NULL) {
			lista = nodo;
		}
		else
		{
			banco *aux2 = lista;
			banco *aux = lista;
			while (aux->sig != NULL) {
				aux = aux->sig;
			}
			aux->sig = nodo;
			aux2 = aux->sig;
			aux = lista;
			while (aux->sig->sig != NULL) {
				aux = aux->sig;
			}
			aux2->ant = aux;
			aux = aux2;
			cout << "hola" << endl;
		}
	}
	void agregar(){
		banco *nodo = new banco();
		nodo->agregar();
		if (lista == NULL){
			lista = nodo;
		}
		else
		{
			banco *aux2 = lista;
			banco *aux = lista;
			while (aux->sig!=NULL){
				aux = aux->sig;
			}
			aux->sig = nodo;
			aux2 = aux->sig;
			aux = lista;
			while (aux->sig->sig != NULL) {
				aux = aux->sig;
			}
			aux2->ant = aux;
			aux = aux2;
			cout << "hola" << endl;
		}
	}
	void listar() {
		if (lista == NULL) {
			cout << "Lista vacia";
		}
		else{
			banco *aux1 = lista;
			while (aux1 != NULL) {
				aux1->listar();
				aux1 = aux1->sig;
			}
		}
	}
	void agregarDefinido(string nombre,string paginaWeb,string conmutador,string matriz) {
		banco *nodo = new banco(nombre,paginaWeb,conmutador,matriz);
		
		if (lista == NULL) {
			lista = nodo;
		}
		else
		{
			banco *aux = lista;
			banco *aux2 = lista;
			while (aux->sig != NULL) {
				aux = aux->sig;
			}
			aux->sig = nodo;
			aux2 = aux->sig;
			aux = lista;
			while (aux->sig->sig != NULL) {
				aux = aux->sig;
			}
			aux2->ant = aux;
			aux = aux2;

		}
	}
	void Buscar(string nombre) {
		bool encontrado=false;
		if (lista == NULL) {
			cout << "Lista vacia";
		}
		else {
			banco *aux = lista;
			while (aux->sig != NULL && aux->getNombre()!=nombre) {
				if (aux->getNombre() == nombre) {
					encontrado = true;
					menuEditar(aux);
				}

				aux = aux->sig;
			}
			
			if (aux->getNombre() == nombre) {
				encontrado = true;
				menuEditar(aux);
			}
			if (encontrado == false) {
				cout << "No se encontro banco" << endl;
			}
		}
	}

	void menuEditar(banco *aux) {
		int opc;
		do {
			system("cls");
			cout << "Bienvenido a "<<aux->getNombre()<< endl;
			cout << "1)Editar Banco\n2)Abrir Menú sucursales\n3)salir\n" << endl;
			cin >> opc;
			switch (opc)
			{
			case 1:
				aux->Editar();
				break;
			case 2:
				aux->MenuSucursales();
				break;
			case 3:
				cout << "Adios" << endl;
				break;
			default:
				cout << "opcion incorrecta" << endl;
			}
		} while (opc != 3);



	}

	void Ordenar() {
		listaauxx= new ListaBancos();
		string valorActual;
		string valorSiguiente;
		char *var;
	
		if (lista == NULL) {
			cout << "Lista vacia";
		}
		else {
			banco *aux ,*actual,*anterior,*temporal,*despues, *copiar;
			banco intermedio;
			aux = lista;
			actual = lista;
			anterior= lista;
			temporal = lista;
			while (actual->sig != NULL) {

				temporal = actual;
				aux=actual->sig;
				while (aux != NULL)
				{
					cout << temporal->getNombre() <<"-"<< aux->getNombre() << endl;
					string a = temporal->getNombre();
					string b = aux->getNombre();
				
					int cont = 0;
					while (a[cont] != NULL) {
						a[cont] = tolower(a[cont]);
						cont++;
					}
					cont = 0;
					while (b[cont] != NULL) {
						b[cont] = tolower(b[cont]);
						cont++;
					}
				
					if (a > b ) {
					
						temporal = aux;

					}
					
					aux = aux->sig;
				}
				copiar = new banco();
						
				*copiar = *temporal;
				copiar->sig = NULL;
				copiar->ant = NULL;

				listaauxx->agregarNodo(copiar);

				if (temporal->sig == NULL) {

					if (temporal->ant == NULL) {
						//Lista de solo uno
						lista = temporal->sig;
						free(temporal);
						
					}
					else {
						//Ultimo
						anterior = temporal->ant;
						anterior->sig = NULL;
						free(temporal);
					}
				}
				else {

					if (temporal->ant == NULL) {
						
						if (temporal->sig == NULL) {
							free(temporal);
						//solo uno , no tiene sentido 
						}
						
						else {//Primero
							despues = temporal->sig;
							despues->ant = NULL;				
							actual = temporal->sig;
							cout << "hola" << endl;
							free(temporal);
							cout << "eliminadociti" << endl;
						}

					}
					else {
						//caso en medio
						anterior = temporal->ant;
						anterior->sig = temporal->sig;
						despues = temporal->sig;
						despues->ant = anterior;
						//	lista = nuevo;
						free(temporal);
					}
					
				}
				
			}
			
			actual->sig = NULL;
			actual->ant = NULL;

			listaauxx->agregarNodo(actual);
			
			this->lista = listaauxx->lista;
		}



	}

};









































int main()
{
	ListaBancos *listabancos= new ListaBancos;
	int opc;
	string valor;
	listabancos->agregarDefinido("citiBanamex", "www.citiBanamex", "123456", "CDMX");
	listabancos->agregarDefinido("HSBC", "www.HSBC.com", "123456", "Inglaterra");
	do
	{
		system("cls");
	cout << "Seleccione una opcion\n1)Agregar Banco\n2)Listar Bancos\n3)Buscar(Agregar Sucursal/Editar Banco)\n4)Ordenar\n5)Salir" << endl;
	cin >> opc;
	switch (opc)
	{
	case 1:
		listabancos->agregar();
		
		break;
	case 2:
		listabancos->listar();
		system("pause");
		break;
	case 3: 
		cout << "Ingrese el nombre del banco a buscar" << endl;
		cin >> valor;
		listabancos->Buscar(valor);
		system("pause");
		break;
	case 4:
		listabancos->Ordenar();
		system("pause");
		break;
	case 5:
		cout << "Adios" << endl;
		break;
	default:
		cout << "opcion invalida" << endl;
		break;
	}

	} while (opc!=5);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

