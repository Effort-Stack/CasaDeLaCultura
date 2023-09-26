#include "include/Validaciones.h"
#include <cctype> // para usar isdigit y isalpha

std::string Validaciones::esStringValido(const std::string& cadena) {
    for(char c : cadena) {
        if (!isalpha(c) && !isspace(c)) { // si no es letra ni espacio
            return "El valor ingresado contiene caracteres no válidos. Por favor, ingrese solo letras y espacios.";
        }
    }
    return ""; // Cadena válida, no hay mensaje de error
}

std::string Validaciones::esNumeroValido(const std::string& cadena) {
    for(char c : cadena) {
        if (!isdigit(c)) { // si no es un dígito
            return "El valor ingresado no es un número válido. Por favor, ingrese solo dígitos.";
        }
    }
    return ""; // Número válido, no hay mensaje de error
}

