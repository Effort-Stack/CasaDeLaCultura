#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class Validaciones {
public:
    // Verifica si una cadena contiene solo letras y espacios. 
    // Retorna un mensaje de error si no es v�lido, o un string vac�o si es v�lido.
    static std::string esStringValido(const std::string& cadena);
    
    // Verifica si una cadena representa un n�mero v�lido. 
    // Retorna un mensaje de error si no es v�lido, o un string vac�o si es v�lido.
    static std::string esNumeroValido(const std::string& cadena);
};

#endif

