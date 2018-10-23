/*
    Este header posee todas las definiciones de las funciones
    que estan relacionadas con los objetivos y herramientas 
    del trabajo practico, sea para su creacion, control, o visualizacion.
*/

#ifndef TOOLS
#define TOOLS
#include "commondef.h"

//Herramientas
void esGrafo(int, int, int);
void esPlano(int, int);
void esBipartito(int, int );
void esRegular(int[]);
void gradoMaximo(int[]);
int contarAristas(header*);
int contarVertices(header*);

#endif