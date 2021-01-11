#ifndef COMPLEJOS_COMPLEJOS_SRC_H
#define COMPLEJOS_COMPLEJOS_SRC_H
#include <vector>
class Complejo{
    std::vector <float> n_complejo_;
    public:
        Complejo() : n_complejo_{0.0,0.0}{};
        std::vector <float> AccederComplejo(){return(n_complejo_);};

        bool ComprobarComplejo (std::vector <float> numero_complejo);

        float ObtenerReal (std::vector <float> numero_complejo){if (ComprobarComplejo(numero_complejo)=true){return (numero_complejo.at(0));};

        float ObtenerImaginaria (std::vector <float> numero_complejo){if (ComprobarComplejo(numero_complejo)=true){return (numero_complejo.at(1));};};

        void Print (std::vector <float> numero_complejo);

        std::vector <float> Add (std::vector <float> numero_complejo);

        std::vector <float> Subtract (std::vector <float> numero_complejo);

        friend operator-(const Complejo& numero_complejo, float numero);{
            Complejo complejo_resultado;
            complejo_resultado.n_complejo_.at(0)=numero + numero_complejo.at(0);
            complejo_resultado.n_complejo_.at(1)=numero_complejo.at(1);
            return(complejo_resultado.AccederComplejo());
        }
           
};
#endif//Espera una declaración, aunque ; está colocado y el resto del header es correcto