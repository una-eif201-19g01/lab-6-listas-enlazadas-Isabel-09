

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#include <string>
class Libro {
	std::string id;
	std::string nombre;
public:
	Libro();
	Libro(std::string, std::string);
	~Libro();
	std::string getID();
	void setID(std::string id);
	std::string getNombre();
	void setNombre(std::string);
	std::string toString();
};



#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H


