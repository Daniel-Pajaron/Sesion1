#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona
{
public:
    Persona(int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
	
private:
    bool genero; // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];
};

#endif // PERSONA_HPP	