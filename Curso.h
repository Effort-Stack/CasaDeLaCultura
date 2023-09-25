#include <string>

class Curso {
private:
    std::string nombre;
    int cupo;
    int cuposDisponibles;
    double costo;

public:
    // Constructor
    Curso(const std::string& nombre, int cupo, double costo);

    // M�todos (setters y getters)
    std::string getNombre() const;
    int getCupo() const;
    int getCuposDisponibles() const;
    double getCosto() const;

    void setNombre(const std::string& nombre);
    void setCupo(int cupo);
    void setCosto(double costo);

    // Otros m�todos
    bool inscribirAlumno();
    void mostrarInfo() const;
};

