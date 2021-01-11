/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco Marqués Armas
 * @date 9 Ene 2020
 * @brief Parte de la práctica 12, en la que se desarrollan tests unitarios con la plataforma gtest
 * Programa principal que invoca las funciones necesarias para
 * añadir y restar números complejos
 * representar números complejos
*/
#include <iostream>
#include <fstream>
#include <vector>
#include "tools.h"
#include "fechas.h"
int main(int argc, char* *argv){
    Usage(argc, argv);
    Complejo complejo_1.Add({0.0,0.0});
    Complejo complejo_2.Add({-1,10});
    complejo_1.add{AccederComplejo(complejo_2)};
    complejo_1.Print();
    complejo_2.Subtract({-1,10});
    complejo_2.Print();
}