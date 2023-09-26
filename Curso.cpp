#include "include/Curso.h"

// Constructor por defecto
Curso::Curso() : nombre(""), cupos(0), costo(0.0) {}

// Constructor con parámetros
Curso::Curso(const std::string& nombre, int cupos, double costo) 
    : nombre(nombre), cupos(cupos), costo(costo) {}

// Métodos para obtener y establecer atributos
std::string Curso::getNombre() const {
    return nombre;
}

bool Curso::setNombre(const std::string& nombre) {
    std::string error = Validaciones::esStringValido(nombre);
    if (error.empty()) {
        this->nombre = nombre;
        return true;
    }
    std::cout << error << std::endl;
    return false;
}

int Curso::getCupos() const {
    return cupos;
}

bool Curso::setCupos(int cupos) {
    if (cupos >= 0) {
        this->cupos = cupos;
        return true;
    }
    std::cout << "El número de cupos no puede ser negativo." << std::endl;
    return false;
}

double Curso::getCosto() const {
    return costo;
}

bool Curso::setCosto(double costo) {
    if (costo >= 0) {
        this->costo = costo;
        return true;
    }
    std::cout << "El costo no puede ser negativo." << std::endl;
    return false;
}

const std::vector<std::string>& Curso::getAlumnosInscritos() const {
    return alumnosInscritos;
}

bool Curso::inscribirAlumno(const std::string& nombreAlumno) {
    std::string error = Validaciones::esStringValido(nombreAlumno);
    if (error.empty() && cupos > 0) {
        alumnosInscritos.push_back(nombreAlumno);
        cupos--;
        return true;
    }
    std::cout << error << std::endl;
    return false;
}

bool Curso::removerAlumno(const std::string& nombreAlumno) {
    for (size_t i = 0; i < alumnosInscritos.size(); i++) {
        if (alumnosInscritos[i] == nombreAlumno) {
            alumnosInscritos.erase(alumnosInscritos.begin() + i);
            cupos++;
            return true;
        }
    }
    std::cout << "Alumno no encontrado en el curso." << std::endl;
    return false;
}



