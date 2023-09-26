#include <string>
#include <list>

class Alumno {
private:
    std::string nombre;  // Nombre del alumno
    std::string apellido;  // Apellido del alumno
    std::string carnet;  // Carnet único del alumno
    std::list<std::string> cursosInscritos;  // Lista enlazada de nombres de cursos en los que está inscrito el alumno

public:
    // Constructor para inicializar un alumno con nombre, apellido y carnet
    Alumno(const std::string& nombre, const std::string& apellido, const std::string& carnet);

    // Getters para obtener los atributos del alumno
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getCarnet() const;
    const std::list<std::string>& getCursosInscritos() const;

    // Métodos para inscribir y desinscribir cursos
    void inscribirCurso(const std::string& nombreCurso);
    void removerCurso(const std::string& nombreCurso);
};

