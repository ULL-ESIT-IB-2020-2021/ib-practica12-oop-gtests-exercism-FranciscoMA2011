/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Francisco Marqués Armas alu0101438412@ull.es
  * @date 27 Dic 2020
  * @brief Definición de métodos varios de la clase Fecha
  * @bug No se reconoce el vector como argumento, lo cual causa que el programa no se compile.
  * "Declaración esperada", cada vez que se ve el programa aparece un número de errores diferente 10/12/2021
  * @see https://stackoverflow/questions/1280463/sorting-a-vector-of-custom-objects
  */
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo> //Comprobar tipos de datos

#include "tools.h"
#include "fechas.h"

void Complejo::Print (){
    std::cout<<"La representación binómica del número complejo es: "<<n_complejo_.at(0)<<" + "<<n_complejo_.at(1)<<"i"<<"\n";
}

void Complejo::Add (std::vector <float> numero_complejo) {
    if ComprobarComplejo(){
    n_complejo_.at(0)+=numero_complejo.at(0);
    n_complejo_.at(1)+=numero_complejo.at(0);
    }
}

bool Complejo::ComprobarComplejo (std::vector <float> numero_complejo){
    if(typeid(numero_complejo.at(0)).name()=="float"&&typeid(numero_complejo.at(1)).name()=="float"&&numero_complejo.size()<=2){
        return(true);
    }
    else{
        return(false);
    }
}
void Complejo::Subtract (std::vector <float> numero_complejo) {
    if ComprobarComplejo(){
    n_complejo_.at(0)-=numero_complejo.at(0);
    n_complejo_.at(1)-=numero_complejo.at(0);
    }
}