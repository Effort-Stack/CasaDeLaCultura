#include "include/Validaciones.h"
#include <cctype> // para usar isdigit y isalpha

std::string Validaciones::esStringValido(const std::string& cadena) {
    for(char c : cadena) {
        if (!isalpha(c) && !isspace(c)) { // si no es letra ni espacio
            return "El valor ingresado contiene caracteres no v�lidos. Por favor, ingrese solo letras y espacios.";
        }
    }
    return ""; // Cadena v�lida, no hay mensaje de error
}

std::string Validaciones::esNumeroValido(const std::string& cadena) {
    for(char c : cadena) {
        if (!isdigit(c)) { // si no es un d�gito
            return "El valor ingresado no es un n�mero v�lido. Por favor, ingrese solo d�gitos.";
        }
    }
    return ""; // N�mero v�lido, no hay mensaje de error
}

