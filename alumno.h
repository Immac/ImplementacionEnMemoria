#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
class Alumno : public Persona
{
public:
    Alumno();
    float promedio;
    float getPromedio() const;
    void setPromedio(float value);
};

void Alumno_ctor(char* me);
float Alumno_getPromedio(char* me);
void Alumno_setPromedio(char*me,float value);

#endif // ALUMNO_H
