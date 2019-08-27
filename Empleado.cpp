/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "Empleado.h"
//constructor
Empleado::Empleado(){
		nombre="";
		anExp=0;
		numeroEmpleado=0;
		salarioBase=0;
		bandera=true;
}
//set y gets
void Empleado::setNombre(string nombre){
	nombre = nombre; 
}
string Empleado::getNombre(){ 
	return nombre; 
}
void Empleado::setNumeroEmpleado(int numero) { 
	numeroEmpleado = numero; 
}
int Empleado::getNumeroEmpleado() { 
	return numeroEmpleado; 
}
void Empleado::setAnEx(int anEx) { 
	anExp = anEx; 
}
int Empleado::getAnEx() { 
	return anExp; 
}
void Empleado::setSalarioBase(float salario) { 
	salarioBase = salario; 
}
float Empleado::getSalarioBase() { 
	return salarioBase; 
}
//metodos
float aumentoSalarial(float &salarioBase, int &anExp){
	float salarioAumentado=0;
	if(anExp==1||anExp<3){
		salarioAumentado=salarioBase*0.02;
	}else{
		salarioAumentado=salarioBase*0.05;		
	}
	return salarioAumentado;
}
void revisionAleatoria(bool &bandera){
	int random=0;
	srand(time(NULL));
	ramdon=(rand()%2);
	if(random==1){
		bandera=true;
	}
	else{
		bandera=false;
	}
}
int numeroEmpleado(){
	srand(time(NULL));
	return (rand()%100+1);
}
string toString() {
	stringstream s;
	s<<endl<<endl;
	s<<"Empleado:"<<numeroEmpleado<<endl;
	s<<"Nombre:"<<nombre<<endl;
	s<<" ";
	s<<"Años de experiencia:"<<anExp<<endl;
	s<<" ";
	s<<"Salario Inicial:" <<salarioBase<<endl;
	s<<" ";
	s<<"Salario Acumulado:"<<aumentoSalarial(float &salarioBase,int &anExp)<<endl;	
	s<<" ";
	s<<"Necesita revison:"<<revisionAleatoria(bool &bandera)<<endl<<endl;
	return s.str();
}
	
