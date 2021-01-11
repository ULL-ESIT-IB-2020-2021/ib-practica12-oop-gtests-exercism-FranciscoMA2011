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

        void Add (std::vector <float> numero_complejo);

        void Subtract (std::vector <float> numero_complejo);
};
#endif//Espera una declaración, aunque ; está colocado y el resto del header es correcto