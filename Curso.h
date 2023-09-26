#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>
#include "Validaciones.h"

class Curso {
private:
    std::string nombre;
    int cupos;
    double costo;
    std::vector<std::string> alumnosInscritos;

public:
    // Constructores
    Curso();
    Curso(const std::string& nombre, int cupos, double costo);

    // Métodos para obtener y establecer atributos
    std::string getNombre() const;
    bool setNombre(const std::string& nombre);

    int getCupos() const;
    bool setCupos(int cupos);

    double getCosto() const;
    bool setCosto(double costo);

    const std::vector<std::string>& getAlumnosInscritos() const;

    // Inscribir un alumno al curso
    bool inscribirAlumno(const std::string& nombreAlumno);

    // Remover un alumno del curso
    bool removerAlumno(const std::string& nombreAlumno);
};

#endif

