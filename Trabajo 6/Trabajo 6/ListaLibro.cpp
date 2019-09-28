
#include "ListaLibros.h"
ListaLibros::ListaLibros() {
	primero = nullptr;
	actual = nullptr;
}
ListaLibros::~ListaLibros() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}
bool ListaLibros::eliminarFinal() {
	actual = primero;
	if (primero == nullptr) {
		return false;
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			delete actual;
		}

	}
	return true;

}

bool ListaLibros::Encontrado(std::string id) {
	actual = primero;
	bool encontrar = false;
	if (primero == nullptr) {
		return encontrar;
	}
	else {
		while (actual->getSiguiente()->getLibro().getID() == id) {
			encontrar = true;
		}
	}
	return encontrar;
}
std::string ListaLibros::obtenerLibro(std::string id) {
	actual = primero;
	std::string encontrar = "No encontrado";
	if (primero == nullptr) {
		return encontrar;
	}
	else {
		while (actual->getSiguiente()->getLibro().getID() == id) {
			encontrar = actual->getSiguiente()->getLibro().toString();
		}
	}
	return encontrar;



}
std::string ListaLibros::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

void ListaLibros::setActual(Nodo* Actual) {

}
Nodo* ListaLibros::getActual() {
	return actual;
}


