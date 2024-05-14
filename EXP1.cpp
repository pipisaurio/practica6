#include <iostream> 

#include <vector> 

#include <algorithm> 

 

using namespace std; 

 

class Estudiante { 

private: 

    string nombre; 

    string apellido; 

    float nota1; 

    float nota2; 

    float nota3; 

     

public: 

    Estudiante(string nombre, string apellido, float nota1, float nota2, float nota3) { 

        this->nombre = nombre; 

        this->apellido = apellido; 

        this->nota1 = nota1; 

        this->nota2 = nota2; 

        this->nota3 = nota3; 

    } 

     

    float promedioNotas() { 

        return (nota1 + nota2 + nota3) / 3; 

    } 

     

    string getNombreCompleto() { 

        return nombre + " " + apellido; 

    } 

}; 

 

bool compararEstudiante(Estudiante e1, Estudiante e2) { 

    return e1.promedioNotas() > e2.promedioNotas(); 

} 

 

int main() { 

    vector<Estudiante> estudiantes; 

     

    estudiantes.push_back(Estudiante("Juan", "Perez", 85.0, 92.0, 78.0)); 

    estudiantes.push_back(Estudiante("Maria", "Gomez", 91.0, 88.0, 95.0)); 

    estudiantes.push_back(Estudiante("Pedro", "Sanchez", 75.0, 82.0, 70.0)); 

 

    sort(estudiantes.begin(), estudiantes.end(), compararEstudiante); 

     

    // Imprimir estudiantes ordenados 

    cout << "Estudiantes ordenados por promedio de notas:" << endl; 

    for (Estudiante estudiante : estudiantes) { 

        cout << estudiante.getNombreCompleto() << " - Promedio: " << estudiante.promedioNotas() << endl; 

    } 

     

    // Imprimir estudiantes con promedio mayor a 85 

    cout << "\nEstudiantes con promedio mayor a 85:" << endl; 

    for (Estudiante estudiante : estudiantes) { 

        if (estudiante.promedioNotas() > 85) { 

            cout << estudiante.getNombreCompleto() << " - Promedio: " << estudiante.promedioNotas() << endl; 

        } 

    } 

     

    return 0; 

} 