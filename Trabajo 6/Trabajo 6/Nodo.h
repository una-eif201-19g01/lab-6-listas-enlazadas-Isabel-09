

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H
#include "Libro.h"
#include<string>
class Nodo {
	Libro libro;
	Nodo* siguiente;
public:
	Nodo();
	Nodo(Libro& libro, Nodo* siguiente);
	~Nodo();
	Libro& getLibro();
	void setLibro(Libro& libro);
	Nodo* getSiguiente();
	void setSiguiente(Nodo* siguiente);
	std::string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H


