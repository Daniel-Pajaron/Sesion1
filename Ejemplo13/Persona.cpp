#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>

Persona::Persona(int e)
{
    edad = e;
    
    // El género se establece de forma automática
    // Generamos 0 o 1 de forma aleatoria
    genero = rand() % 2;
    
    // El dni se establece de forma automática
    // Generamos un número de 8 cifras y le asignamos una letra calculada
    int numeroDNI = rand() % 100000000;
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numeroDNI % 23];
    sprintf(dni, "%08d%c", numeroDNI, letra);
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
    return edad;
}

bool Persona::esMujer()
{ 
    return genero; 
}

void Persona::setEdad(int e)
{
    this->edad = e;
}

void Persona::mostrar()
{
    std::cout << "Edad: " << getEdad() 
              << ", Genero: " << (esMujer() ? "Mujer" : "Hombre") 
              << ", DNI: " << dni << std::endl;
}