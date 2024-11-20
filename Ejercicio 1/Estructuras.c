#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ejercicio1(){

// 1.a) Constitución de una estructura
    struct Estudiante{
        char nombre[50];
        int edad;
        float promedio;
    };

// 1.b) Instanciación de estructuras

    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre,"Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.75;

// 1.c) Instanciación con el operador malloc

    struct Estudiante *estudiante2 = (struct Estudiante*)malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre,"Maria");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.5;

// 1.d) Punteros y estructuras





}