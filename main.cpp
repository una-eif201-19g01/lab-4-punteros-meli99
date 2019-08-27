#include <iostream>
#include "Empleado.h"

int main() {
	string nombre;
	int anExp;
	float salarioBase;
	bool bandera;
	int opcion;
	do{
	std::cout<<"Bienvenido "<<std::endl;
	std::cout<<"1.Nuevo empleado."<<std::endl;
	std::cout<<"2.Empleados Actuales."<<std::endl;
	std::cout<<"3.Salir."<<std::endl;
		switch(opcion){
	case 1:{
	Empleado datos;
	std::cout<<"Digite los datos del nuevo empleado:"<<std::endl;
	std::cout<<"El empleado numero:"<<datos.numeroEmpleado()<<std::endl;
	std::cout<<"Digite el nombre del empleado:"std::endl;
	std::cin>>nombre;
	std::cout<<"Digite los años de experiencia del empleado:"std::endl;
	std::cin>>anExp;
	std::cout<<"Digite el salario base del empleado:"std::endl;
	std::cin>>salaroBase;
	std::cout<<"El aumento salarial es de:"<<datos.aumentoSalarial(float &salarioBase,int &anExp)<<std::endl;
	std::cout<<"El empleado necesita revision:"<<datos.revisionAleatoria(bool &bandera)<<std::endl;
	std::cout<<"Los datos completos son:"<<datos.toString()<<std::endl;
	}
    //Empleado empleado[3];
    //empleado[0].setNombre("Mike");
   // empleado[0].setAnoExperiencia(2);
    //empleado[0].setSalarioBase(1200000);
	case 2:{
	std::cout<<"Empleado # [ 7 ]"<<std::endl;
	std::cout<<"Nombre [ Mike ]"<<std::endl;
	std::cout<<"Años de experiencia [ 2 ]"<<std::endl;
	std::cout<<"Salario Inicial [ 1200000.000000 ]"<<std::endl;
	std::cout<<"Salario Acumulado [ 1248480.000000 ]"<<std::endl;
	std::cout<<"Necesita revision [ Si ]"<<std::endl;
	std::cout<<"-------------------------------------"<<std::endl;
	std::cout<<"Empleado # [ 49 ]"<<std::endl;
	std::cout<<"Nombre [ Sebastian ]"<<std::endl;
	std::cout<<"Años de experiencia [ 3 ]"<<std::endl;
	std::cout<<"Salario Inicial [ 1600000.000000 ]"<<std::endl;
	std::cout<<"Salario Acumulado [ 1747872.000000 ]"<<std::endl;
	std::cout<<"Necesita revision [ Si ]"<<std::endl;
	std::cout<<"-------------------------------------"<<std::endl;
	std::cout<<"Empleado # [ 73 ]"<<std::endl;
	std::cout<<"Nombre [ Carolina ]"<<std::endl;
	std::cout<<"Años de experiencia [ 8 ]"<<std::endl;
	std::cout<<"Salario Inicial [ 1800000.000000 ]"<<std::endl;
	std::cout<<"Salario Acumulado [ 2509624.250000 ]"<<std::endl;
	std::cout<<"Necesita revision [ Si ]"<<std::endl;
	std::cout<<"-------------------------------------"<<std::endl;
	std::cout<<"Empleado # [ 1680065493 ]"<<std::endl;
	std::cout<<"Nombre [ Emma ]"<<std::endl;
	std::cout<<"Años de experiencia [ 1 ]"<<std::endl;
	std::cout<<"Salario Inicial [ 800000.000000 ]"<<std::endl;
	std::cout<<"Salario Acumulado [ 816000.000000 ]"<<std::endl;
	std::cout<<"Necesita revision [ Si ]"<<std::endl;
	}}
	}while(opcion==3){
	std::cout<<"Adios"<<std::endl;
	}
				
	return 0;
}
