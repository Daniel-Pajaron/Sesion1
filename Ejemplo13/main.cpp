#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

using namespace std;

int main(int argc, char** argv)
{
    srand(time(NULL)); // Inicializamos la semilla de números aleatorios

    // Vector para almacenar las 10 edades únicas (de 18 a 27 inclusive)
    int edades[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    
    // Desordenamos las edades para que se asignen de forma aleatoria sin repetirse
    for(int i = 0; i < 10; i++) {
        int index = rand() % 10;
        int temp = edades[i];
        edades[i] = edades[index];
        edades[index] = temp;
    }

    // Se deben crear 10 objetos de tipo Persona
    Persona* personas[10];
    
    for(int i = 0; i < 10; i++) {
        personas[i] = new Persona(edades[i]);
    }

    cout << "--- Listado de Personas ---" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Persona " << i+1 << " -> ";
        personas[i]->mostrar();
    }

    // Liberación de memoria
    for(int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}