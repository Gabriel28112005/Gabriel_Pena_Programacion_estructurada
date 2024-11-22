#include "Ejercicio 1/Estructuras.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    char identificar[50];

    printf("Nombre del estudiante al que buscas: ");
    scanf("%50s",identificar);

    if(strcmp(identificar, "Gabriel") == 0){
        Estudiante estudiante1;
        strcpy(estudiante1.nombre,"Gabriel");
        estudiante1.edad = 20;
        estudiante1.promedio = 8.75;
        mostrarEstudiante(estudiante1);
    }
    else if (strcmp(identificar, "Maria") == 0){
        Estudiante *estudiante2 = (Estudiante*)malloc(sizeof(Estudiante));
        strcpy(estudiante2->nombre,"Maria");
        estudiante2->edad = 18;
        estudiante2->promedio = 6.5;
        mostrarEstudiante(*estudiante2);
    }
    else if (strcmp(identificar, "Pedro") == 0){
        Estudiante estudiante3 = crearEstudiante("Pedro", 22, 7.5);
        mostrarEstudiante(estudiante3);
    }
    else{
        printf("No se ha encontrado al estudiante\n");
    }


    return 0;
}