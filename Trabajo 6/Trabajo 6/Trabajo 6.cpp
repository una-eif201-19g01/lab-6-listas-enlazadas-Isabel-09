#include <iostream>
#include"Libro.h"
#include "ListaLibros.h"
int main() {
	Libro libro1("Sb800", "cuervo");
	Libro libro2("Sb801", "Cronica de una Muerte Anunciada");
	Libro libro3("Sb802", "Cuentos de mi tia Panchita");
	Libro libro4("Sb803", "La Casa de los Espiritus");
	Libro libro5("Sb804", "Lasvenasabiertas de América Latina y Memoria del fuego");

	ListaLibros* listaLibros = new ListaLibros();
	listaLibros->insertarFinal(libro1);
	listaLibros->insertarFinal(libro2);
	listaLibros->insertarFinal(libro3);
	listaLibros->insertarFinal(libro4);
	listaLibros->insertarFinal(libro5);
	std::cout << "lista de libros" <<std::endl<<listaLibros->ToString() << std::endl;
	listaLibros->eliminarFinal();
	std::cout << "lista de libros" << listaLibros->ToString() << std::endl;
	if (listaLibros->Encontrado("Sb801")) 
		std::cout << " Libro si se encuentra" << std::endl;
	else 
		std::cout << "libro no fue encontrado" << std::endl;
	
	std::cout << listaLibros->obtenerLibro("Sb800") << std::endl;
	delete(listaLibros);

	return 0;
}