/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Francisco Marqués Armas alu0101438412@ull.es
  * @date 27 Dic 2020
  * @brief Definición de métodos varios de la clase Fecha
  * @bug Ninguno a día de 10/11/2021
  * @see https://stackoverflow/questions/1280463/sorting-a-vector-of-custom-objects
  */
#include <iostream>
#include <vector>
#include <string>
#include <fstream> //Para la entrada/salida de ficheros
#include <algorithm> //Comparación de un elemento de un vector con el resto

#include "tools.h"
#include "fechas.h"

int Fecha::ObtenerDia(std::string fecha){//Definición de método
    int index=fecha.find_first_of("/");
    int dia=stoi(fecha.substr(0,index-1));
    return(dia);
}
int Fecha::ObtenerMes(std::string fecha){
    int index_dia=fecha.find_first_of("/");
    std::string mes_anyo=fecha.substr(index_dia+1);
    std::string mes_s=mes_anyo.substr(0,fecha.find_first_of("/"));
    int mes{stoi(mes_s)};
    return(mes);
}
int Fecha::ObtenerAnyo(std::string fecha){
    int index_dia=fecha.find_first_of("/");
    std::string mes_anyo=fecha.substr(index_dia+1);
    std::string anyo_s=mes_anyo.substr(mes_anyo.find_first_of("/")+1);
    int anyo{stoi(anyo_s)};
    return(anyo);
}
bool Fecha::ComprobarFecha(std::string fecha){//Condiciones por cada mes (febrero tiene 28 días, etc.)
    int dia=ObtenerDia(fecha);
    int mes=ObtenerMes(fecha);
    int anyo=ObtenerAnyo(fecha);
    if (dia<=31 && dia>0 && mes>=12 && mes>0 && (anyo)>=-46){   //"Menos" para representar antes de Cristo. El calendario juliano se creó el año 46 a.C
        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
            return(true);
        }
        if (mes==4||mes==6||mes==9||mes==11){
            if (dia<=30){
                return(true);
            }
        }
        if(mes==2){
            if (anyo%4==0){
                if (dia<=29){
                    return(true);
                }
            }
            if (dia<=28){
                return(true);
            }
        }
    }
    else
    {
        std::cout<<"La fecha introducida es inválida \n";
        return(false);
    }
    
}
//Permitir que se pueda añadir un objeto de la clase Fecha
void Fecha::AnyadirFecha(std::string fecha){//Condiciones por cada mes (febrero tiene 28 días, etc.)
    if (ComprobarFecha(fecha)){
        fecha_=fecha;
    }
    else
    {
        std::cout<<"La fecha introducida es inválida \n";
        exit(EXIT_SUCCESS);
    }
}

bool Fecha::AnyoBisiesto(std::string fecha){
    int anyo=ObtenerAnyo(fecha);
    if (anyo%4==0){
        std::cout<<"El año es bisiesto \n";
        return(true);
    }
    else {
        std::cout<<"El año no es bisiesto \n";
        return(false);
    }
}
void Fecha::OrdenarFechasAscendente(std::vector <Fecha> fechas_v){
    std::sort(fechas_v.begin(), fechas_v.end());//Con el operador > sobrecargado\
    std::sort debería entender que unas fechas son mayores que otras, y las\
    ordena de forma ascendente por defecto. Ver https://stackoverflow/questions/1280463/sorting-a-vector-of-custom-objects \
    para más información
}
