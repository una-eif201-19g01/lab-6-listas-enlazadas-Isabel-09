#include<sstream>
#include "Libro.h"
Libro::Libro() {
	id = "";
	nombre = "";
}
Libro::Libro(std::string id, std::string nombre)  {
	this->id = id;
	this->nombre = nombre;
}
Libro::~Libro() {}

std::string Libro::getID() {
	return id;
}
void Libro::setID(std::string id) {
	Libro::id = id;
}
std::string Libro::getNombre() {
	return nombre;
}
void Libro::setNombre(std::string nombre) {
	this->nombre = nombre;
}
std::string Libro::toString() {
	std::stringstream s;

	s << "El ID es: " << id << std::endl;
	s << "El nombre es:" << nombre << std::endl;

	return s.str();

}