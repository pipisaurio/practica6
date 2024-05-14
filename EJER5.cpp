#include <iostream> 

#include <vector> 

#include <algorithm> 

 

class Alumno { 

public: 

    Alumno(const std::string& nombre, double promedio) : nombre(nombre), promedio(promedio) {} 

 

    std::string getNombre() const { return nombre; } 

    double getPromedio() const { return promedio; } 

 

private: 

    std::string nombre; 

    double promedio; 

}; 

 

class Grupo { 

private: 

    std::vector<Alumno> alumnos; 

    int cantidad; 

 

public: 

    Grupo(int capacidad) : cantidad(0), alumnos(capacidad) {} 

 

    void agregarAlumno(const Alumno& alumno) { 

        if (cantidad < alumnos.size()) { 

            alumnos[cantidad++] = alumno; 

        } else { 

            std::cout << "El grupo está lleno, no se puede agregar más alumnos." << std::endl; 

        } 

    } 

 

    double promedioPromedios() const { 

        double suma = 0.0; 

        for (const Alumno& alumno : alumnos) { 

            suma += alumno.getPromedio(); 

        } 

        return suma / cantidad; 

    } 

 

    const Alumno& mejorAlumno() const { 

        auto mejorAlumno = std::max_element(alumnos.begin(), alumnos.begin() + cantidad, [](const Alumno& a, const Alumno& b) { 

            return a.getPromedio() < b.getPromedio(); 

        }); 

        return *mejorAlumno; 

    } 

 

    friend std::ostream& operator<<(std::ostream& os, const Grupo& grupo); 

}; 

 

std::ostream& operator<<(std::ostream& os, const Grupo& grupo) { 

    os << "Grupo de " << grupo.cantidad << " alumnos:" << std::endl; 

    for (int i = 0; i < grupo.cantidad; i++) { 

        os << "- " << grupo.alumnos[i].getNombre() << ": " << grupo.alumnos[i].getPromedio() << std::endl; 

    } 

    return os; 

} 

 

int main() { 

    Grupo grupo(5); 

 

    grupo.agregarAlumno(Alumno("Juan", 8.5)); 

    grupo.agregarAlumno(Alumno("María", 9.2)); 

    grupo.agregarAlumno(Alumno("Pedro", 7.8)); 

    grupo.agregarAlumno(Alumno("Ana", 9.5)); 

    grupo.agregarAlumno(Alumno("Luis", 8.0)); 

 

    std::cout << grupo << std::endl; 

    std::cout << "Promedio de promedios: " << grupo.promedioPromedios() << std::endl; 

    std::cout << "Mejor alumno: " << grupo.mejorAlumno().getNombre() << " (" << grupo.mejorAlumno().getPromedio() << ")" << std::endl; 

 

    return 0; 

} 