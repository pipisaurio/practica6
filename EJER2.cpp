#include <vector> 

 

class Alumno { 

    // Implementación de la clase Alumno 

}; 

 

class Grupo { 

private: 

    std::vector<Alumno> alumnos; 

    int cantidad; 

 

public: 

    Grupo() : cantidad(0) {} 

 

    void agregarAlumno(const Alumno& alumno) { 

        alumnos.push_back(alumno); 

        cantidad++; 

    } 

 

    void eliminarAlumno(const Alumno& alumno) { 

        auto it = std::find(alumnos.begin(), alumnos.end(), alumno); 

        if (it != alumnos.end()) { 

            alumnos.erase(it); 

            cantidad--; 

        } 

    } 

 

    const std::vector<Alumno>& getAlumnos() const { 

        return alumnos; 

    } 

 

    int getCantidad() const { 

        return cantidad; 

    } 

}; 