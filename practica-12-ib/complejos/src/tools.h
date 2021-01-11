#ifndef TOOLS_FECHAS_SRC_H
#define TOOLS_FECHAS_SRC_H
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco Marqués alu0101438412@ull.edu.es
 * @date 29.dic.2020
 * @brief This file declares the "Help Text" constant and three functions
 *
 */

#include <iostream>

const std::string kHelpText = "Este programa permite realizar operaciones\
con números complejos e imprimir el resultado en pantalla";

void Usage(int argc, char *argv[]);
std::vector <std::string> LecturaMultilinea(std::string nombre_archivo);
std::string VecToString(std::vector <std::string> vector_s);
void Escritura(std::string fichero_salida, std::string contenidos_archivo);
#endif