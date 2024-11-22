//
// Created by gapt2 on 19/11/2024.
//

#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

void ejercicio1();


typedef struct {
    char nombre[50];
    int edad;
    float promedio;
}Estudiante;

// 1.a) Constitución de una estructura

Estudiante crearEstudiante(char nombre[50], int edad, float promedio);

Estudiante mostrarEstudiante(Estudiante estudiante);


//Ejercicio 3. Copia de estructuras
Estudiante copiarEstudiante(Estudiante est);

Estudiante eliminarEstudiante(Estudiante est);

Estudiante obtenerEstudiante(Estudiante est);

Estudiante modificarEstudiante(Estudiante est, char nombre[50], int edad, float promedio);

Estudiante buscarEstudiante(Estudiante est, char nombre[50]);

#endif //ESTRUCTURAS_H
