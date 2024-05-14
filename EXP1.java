// Online Java Compiler 

// Use this editor to write, compile and run your Java code online 

import java.util.ArrayList; 

import java.util.Collections; 

import java.util.Comparator; 

 

class Estudiante { 

    private String nombre; 

    private String apellido; 

    private double nota1; 

    private double nota2; 

    private double nota3; 

 

    public Estudiante(String nombre, String apellido, double nota1, double nota2, double nota3) { 

        this.nombre = nombre; 

        this.apellido = apellido; 

        this.nota1 = nota1; 

        this.nota2 = nota2; 

        this.nota3 = nota3; 

    } 

 

    public double promedioNotas() { 

        return (nota1 + nota2 + nota3) / 3; 

    } 

 

    public String getNombreCompleto() { 

        return nombre + " " + apellido; 

    } 

} 

 

public class Main { 

    public static void main(String[] args) { 

        ArrayList<Estudiante> estudiantes = new ArrayList<>(); 

        estudiantes.add(new Estudiante("Juan", "Perez", 85.0, 92.0, 78.0)); 

        estudiantes.add(new Estudiante("Maria", "Gomez", 91.0, 88.0, 95.0)); 

        estudiantes.add(new Estudiante("Pedro", "Sanchez", 75.0, 82.0, 70.0)); 

 

        Collections.sort(estudiantes, Comparator.comparingDouble(Estudiante::promedioNotas).reversed()); 

 

        System.out.println("Estudiantes ordenados por promedio de notas:"); 

        for (Estudiante estudiante : estudiantes) { 

            System.out.println(estudiante.getNombreCompleto() + " - Promedio: " + estudiante.promedioNotas()); 

        } 

 

        System.out.println("\nEstudiantes con promedio mayor a 85:"); 

        for (Estudiante estudiante : estudiantes) { 

            if (estudiante.promedioNotas() > 85) { 

                System.out.println(estudiante.getNombreCompleto() + " - Promedio: " + estudiante.promedioNotas()); 

            } 

        } 

    } 

} 