#include <iostream> 

#include <vector> 

#include <algorithm> 

#include <numeric> 

#include <string> 

 

using namespace std; 

 

class Alumno { 

public: 

    string nombre; 

    int edad; 

    double promedio; 

 

    Alumno(const string& nombre, int edad, double promedio) 

        : nombre(nombre), edad(edad), promedio(promedio) {} 

}; 

 

class Grupo { 

private: 

    vector<Alumno> alumnos; 

 

public: 

    Grupo(int cantidad) : alumnos(cantidad) {} 

 

    string str() const { 

        string resultado; 

        for (const auto& alumno : alumnos) { 

            resultado += "Nombre: " + alumno.nombre + ", Edad: " + to_string(alumno.edad) + ", Promedio: " + to_string(alumno.promedio) + "\n"; 

        } 

        return resultado; 

    } 

 

    void agregar_alumno(const string& nombre, int edad, double promedio) { 

        alumnos.emplace_back(nombre, edad, promedio); 

    } 

 

    void ordenar_por_promedio() { 

        sort(alumnos.begin(), alumnos.end(), [](const Alumno& a, const Alumno& b) { 

            return a.promedio < b.promedio; 

        }); 

    } 

 

    double promedio_grupo() const { 

        double sum = accumulate(alumnos.begin(), alumnos.end(), 0.0, [](double total, const Alumno& alumno) { 

            return total + alumno.promedio; 

        }); 

        return sum / alumnos.size(); 

    } 

 

    Alumno mejor_promedio() const { 

        return *max_element(alumnos.begin(), alumnos.end(), [](const Alumno& a, const Alumno& b) { 

            return a.promedio < b.promedio; 

        }); 

    } 

}; 