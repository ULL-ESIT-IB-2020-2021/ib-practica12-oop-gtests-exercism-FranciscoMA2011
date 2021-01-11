/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file tools.cc
  * @author Francisco Marqués Armas alu0101438412@ull.es
  * @date 27 Dic 2020
  * @brief Definición de funciones de información para el usuario,
  * conversión de contenidos de un fichero a string y de creación de
  * ficheros con el contenido deseado.
  * @bug Ninguno a día de 29/12/2020
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */
#include <iostream>
#include <fstream>
#include <cstdlib>  //exit
#include <vector>

#include "tools.h"

void Usage (int argc, char *argv[]){
    if (argc!=3){
        std::cout<< argv[0]<<"-- Gestión de fechas \n";
        std::cout<<"Modo de uso: "<<argv[0]<<" ./main_program fichero_entrada.txt fichero_salida.txt \n";
        std::cout<<" Pruebe " << argv[0] <<" --help para más información \n";
            exit(EXIT_SUCCESS);
    }
    std::string parameter {argv[1]};
    if (parameter == "--help"){
        std::cout<< argv[0]<<"-- Gestión de fechas \n";
        std::cout<<kHelpText<<"\n";
        exit(EXIT_SUCCESS);
    }
}

std::vector <std::string> LecturaMultilinea(const std::string& nombre_archivo){
    std::ifstream inFile;
    std::vector <std::string> lineas;
    std::string linea;
    inFile.open(nombre_archivo);
    if (!inFile){
        std::cout<<"No se pudo abrir "<<nombre_archivo<<"\n";
        exit(EXIT_SUCCESS);
    }
    //Pasar contenidos del archivo a una string
    std::string archivo_string;
    while(!inFile.eof()){
        std::getline (inFile, linea);
        lineas.push_back(linea);
    }
    inFile.close();//Cerrar el archivo
    return (lineas);
}
void Escritura(std::string contenidos_archivo, std::string fichero_salida){
    std::ofstream outFile;
    outFile.open(fichero_salida);
    if (!outFile){
        std::cout<<"No se pudo crear "<<fichero_salida<<"\n";
        exit(EXIT_SUCCESS);
    }
    outFile<<contenidos_archivo;
    outFile.close();//Cerrar el archivo
}
std::string VecToString(std::vector<std::string> vector_s){
    std::string contenidos_s;
    for (size_t i{0}; i<vector_s.size(); i++){
        //std::cout<<vector_s.at(i);
        contenidos_s=contenidos_s+" "+vector_s.at(i);
    }
    return(contenidos_s);
}
