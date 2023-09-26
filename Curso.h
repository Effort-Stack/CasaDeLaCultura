#include <string>
#include <vector>

class Curso {
private:
    std::string nombre;  // Nombre del curso (ejemplo: "Matemáticas")
    int cupo;            // Cupo máximo de alumnos para el curso
    double costo;        // Costo del curso
    std::vector<std::string> alumnosInscritos;  // Lista de carnets de alumnos inscritos en el curso

public:
    // Constructor para inicializar un curso con nombre, cupo y costo
    Curso(const std::string& nombre, int cupo, double costo);

    // Getters para obtener los atributos del curso
    std::string getNombre() const;
    int getCupo() const;
    double getCosto() const;
    const std::vector<std::string>& obtenerAlumnosInscritos() const;

    // Métodos para inscribir y remover alumnos por carnet
    void inscribirAlumno(const std::string& carnetAlumno);
    void removerAlumno(const std::string& carnetAlumno);
};

