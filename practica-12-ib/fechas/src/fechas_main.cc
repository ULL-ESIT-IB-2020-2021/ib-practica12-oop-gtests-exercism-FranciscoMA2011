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
 * ordenar en orden ascendente cronológicamente las fechas de un archivo y
 * determinar si un año es bisiesto
*/

#include <iostream>
#include <fstream>
#include <vector>
#include "tools.h"
#include "fechas.h"
int main(int argc, char* *argv){
    Usage(argc, argv);
    std::vector <std::string> fechas_vec_s{LecturaMultilinea(argv[1])};
    std::vector <Fecha> fechas_vec_fech {};
    std::vector <std::string> fechas_ordenadas {};
    for (size_t i{0}; i<fechas_vec_s.size(); i++){
        fechas_vec_fech.at(i).AnyadirFecha(fechas_vec_s.at(i));
        fechas_vec_fech.at(i).AnyoBisiesto(fechas_vec_fech.at(i).AccederFecha());//Comprobar que el año es bisiesto
    }
    Fecha::OrdenarFechasAscendente(fechas_vec_fech);
    for (size_t i{0}; i<fechas_vec_s.size(); i++){
        fechas_ordenadas.at(i)=fechas_vec_fech.at(i).AccederFecha();
    }
    Escritura(argv[2], VecToString(fechas_ordenadas));
}