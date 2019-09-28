
#include "Libro.h"
#include "Nodo.h"
Nodo::Nodo() {

}
Nodo::Nodo(Libro& libro, Nodo* siguiente) :libro(libro), siguiente(siguiente) {}
Nodo::~Nodo() {}

Libro& Nodo::getLibro() {
	return libro;
}
void Nodo::setLibro(Libro& libro) {
	this->libro = libro;
}
Nodo* Nodo::getSiguiente() {
	return siguiente;
}
void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}
std::string Nodo::toString() {
	std::string reporte = "";
	reporte = libro.toString();
	return reporte;
}