class Estudiante: 

    def _init_(self, nombre, apellido, nota1, nota2, nota3): 

        self.nombre = nombre 

        self.apellido = apellido 

        self.nota1 = nota1 

        self.nota2 = nota2 

        self.nota3 = nota3 

 

    def promedio_notas(self): 

        return (self.nota1 + self.nota2 + self.nota3) / 3 

 

    def get_nombre_completo(self): 

        return f"{self.nombre} {self.apellido}" 

 

estudiantes = [ 

    Estudiante("Juan", "Perez", 85.0, 92.0, 78.0), 

    Estudiante("Maria", "Gomez", 91.0, 88.0, 95.0), 

    Estudiante("Pedro", "Sanchez", 75.0, 82.0, 70.0) 

] 

 

estudiantes.sort(key=lambda x: x.promedio_notas(), reverse=True) 

 

print("Estudiantes ordenados por promedio de notas:") 

for estudiante in estudiantes: 

    print(f"{estudiante.get_nombre_completo()} - Promedio: {estudiante.promedio_notas()}") 

 

print("\nEstudiantes con promedio mayor a 85:") 

for estudiante in estudiantes: 

    if estudiante.promedio_notas() > 85: 

        print(f"{estudiante.get_nombre_completo()} - Promedio: {estudiante.promedio_notas()}") 