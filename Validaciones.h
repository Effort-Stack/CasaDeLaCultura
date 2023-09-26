#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class Validaciones {
public:
    // Verifica si una cadena contiene solo letras y espacios. 
    // Retorna un mensaje de error si no es válido, o un string vacío si es válido.
    static std::string esStringValido(const std::string& cadena);
    
    // Verifica si una cadena representa un número válido. 
    // Retorna un mensaje de error si no es válido, o un string vacío si es válido.
    static std::string esNumeroValido(const std::string& cadena);
};

#endif

