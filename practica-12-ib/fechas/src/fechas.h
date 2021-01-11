#ifndef FECHAS_FECHAS_SRC_H //Comienzo de las guardas de cabecera
#define FECHAS_FECHAS_SRC_H
class Fecha{ //Clase
    private: //Especificador de acceso: reservado para funciones de la clase
        std::string fecha_;//Atributo
    public://Especificador de acceso: puede ser accedido por otras funciones
        Fecha() : fecha_{"01/01/2021"}{};//Declaración de constructor, inicializa variables

        std::string AccederFecha(){return fecha_;}; //Función de acceso

        bool ComprobarFecha(std::string fecha);//Declaración de método

        void AnyadirFecha(std::string fecha);//Declaración de método

        static void OrdenarFechasAscendente(std::vector <Fecha> fechas_v);//Declaración de método

        bool AnyoBisiesto (std::string fecha);//Declaración de método 

        int ObtenerAnyo(std::string fecha);//Declaración de método
        int ObtenerMes(std::string fecha);//Declaración de método
        int ObtenerDia(std::string fecha);//Declaración de método

        bool operator>(const Fecha& fecha){//Overloading de operador. bool = tipo de retorno, argumento = objeto con que puede operar
            Fecha fecha_1;
            if (fecha_1.ObtenerAnyo(fecha_1.AccederFecha())>this->ObtenerAnyo(this->AccederFecha())){
                return(true);
            }
            else{
                if (fecha_1.ObtenerMes(fecha_1.AccederFecha())>this->ObtenerMes(this->AccederFecha())){
                    return(true);
                }
                else{
                    if (fecha_1.ObtenerAnyo(fecha_1.AccederFecha())>this->ObtenerAnyo(this->AccederFecha())){
                        return(true);
                    }
                    else{
                        return(false);
                    }
                }
            }
        }
};
#endif //FECHAS_FECHAS_SRC_H fin de las guardas de cabecera