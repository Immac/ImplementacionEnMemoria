#include "alumno.h"

Alumno::Alumno()
{
}
float Alumno::getPromedio() const
{
    return promedio;
}

void Alumno::setPromedio(float value)
{
    promedio = value;
}



float Alumno_getPromedio(char *me)
{
    return (*((float*)(me+104)));
}


void Alumno_setPromedio(char *me, float value)
{
    *((float*)(me+104)) = value;
}


void Alumno_ctor(char *me)
{
    Persona_ctor(me);
    Alumno_setPromedio(me,0);
}
