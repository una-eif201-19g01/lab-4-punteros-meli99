/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <sstream>
#include <windows.h>
using std::string;
class Empleado {
protected:
	string nombre;
	int numeroEmpleado;
	int anExp;
	float salarioBase;
	bool bandera;
private:
	
	float aumentoSalarial(float &salarioBase,int &anExp);
	void revisionAleatoria(bool &bandera);
	
public:
	Empleado();
	void setNombre(string);
	string getNombre();
	void setNumeroEmpleado(int );
	int getNumeroEmpleado();
	void setAnEx(int);
	int getAnEx(); 
	void setSalarioBase(float);
	float getSalarioBase();
	
	
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
