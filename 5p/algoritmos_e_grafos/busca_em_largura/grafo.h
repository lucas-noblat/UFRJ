#ifndef GRAFO_H
#define GRAFO_H


#include <stdio.h>
#include <stdlib.h>


typedef struct No {
    
    int cor, distancia, identificador;
    struct No* pai;
} No;

typedef struct Aresta{

    int origem, destino, peso;

} Aresta;

typedef struct Grafo {
    No* vertices;
    Aresta* E;
    int numero_vertices;

} Grafo;

Grafo criar_grafo(int vertices);

#endif