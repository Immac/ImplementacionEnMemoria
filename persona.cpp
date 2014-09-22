#include "persona.h"

Persona::Persona()
{
}

void Persona::setNombre(char *value)
{
    strcpy(nombre,value);
}
int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}

char *Persona::getNombre()
{
    return nombre;
}



void Persona_setNombre(char *me, const char *value)
{
    std::strcpy(me,value);
}

char* Persona_getNombre(char *me)
{
    return me;
}


void Persona_setEdad(char *me, const int value)
{
    *((int*)(me+100)) = value;
}


int Persona_getEdad(char *me)
{
    return (*((int*)(me+100)));
}


void Persona_ctor(char *me)
{
    Persona_setNombre(me,"");
    Persona_setEdad(me,0);
}
