#pragma once


#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#include "Nodo.h"
#include "Libro.h"
#include <string>

class ListaLibros {
	Nodo* primero;
	Nodo* actual;
public:
	ListaLibros();
	~ListaLibros();

	Nodo* getPrimero();
	void  setPrimero(Nodo* primero);
	Nodo* getActual();
	void setActual(Nodo* actual);
	std::string toString();
	void insertarFinal(Libro& libro);
	bool eliminarFinal();
	bool Encontrado(std::string);
	std::string obtenerLibro(std::string);
	std::string ToString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H



