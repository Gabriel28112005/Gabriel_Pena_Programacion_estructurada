#include "Estructuras.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1.a) Constitución de una estructura

    Estudiante crearEstudiante(char nombre[50], int edad, float promedio){
        Estudiante estudiante;
        strcpy(estudiante.nombre, nombre);
        estudiante.edad = edad;
        estudiante.promedio = promedio;
        return estudiante;
    }

    Estudiante mostrarEstudiante(Estudiante estudiante){
        printf("Nombre: %s, ", estudiante.nombre);
        printf("Edad: %d, ", estudiante.edad);
        printf("Promedio: %.2f\n", estudiante.promedio);
        return estudiante;
    }


    //Ejercicio 3. Copia de estructuras
    Estudiante copiarEstudiante(Estudiante est) {
        Estudiante nuevoEst;
        strcpy(nuevoEst.nombre, est.nombre);
        nuevoEst.edad = est.edad;
        nuevoEst.promedio = est.promedio;
        return nuevoEst;
    }

    Estudiante eliminarEstudiante(Estudiante est){
        strcpy(est.nombre, "");
        est.edad = 0;
        est.promedio = 0;
        return est;
    }

    Estudiante obtenerEstudiante(Estudiante est){
        return est;
    }

    Estudiante modificarEstudiante(Estudiante est, char nombre[50], int edad, float promedio){
        strcpy(est.nombre, nombre);
        est.edad = edad;
        est.promedio = promedio;
        return est;
    }

    Estudiante buscarEstudiante(Estudiante est, char nombre[50]){
        if(strcmp(est.nombre, nombre) == 0){
            return est;
        }
        else{
            printf("No se ha encontrado al estudiante\n");
        }
    }