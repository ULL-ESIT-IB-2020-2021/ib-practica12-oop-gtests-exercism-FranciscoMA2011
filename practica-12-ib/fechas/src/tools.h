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

const std::string kHelpText = "Este programa permite determinar si un año es bisiesto, \
y ordenar en orden ascendente cronológicamente todas las fechas de un fichero de entrada. \
El resultado se guarda en un fichero de nombre introducido del tipo .txt";

void Usage(int argc, char *argv[]);
std::vector <std::string> LecturaMultilinea(std::string nombre_archivo);
std::string VecToString(std::vector <std::string> vector_s);
void Escritura(std::string fichero_salida, std::string contenidos_archivo);
#endif