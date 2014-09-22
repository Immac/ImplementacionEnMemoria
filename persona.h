#ifndef PERSONA_H
#define PERSONA_H
#include <cstring>

class Persona
{
public:
    Persona();
private:
    char nombre[100];
    int edad;
public:
    void setNombre(char* value);
    void setEdad(int value);
    char* getNombre();
    int getEdad() const;
};

void Persona_setNombre(char* me, const char* value);
char *Persona_getNombre(char* me);
void Persona_setEdad(char* me, const int value);
int Persona_getEdad(char* me);
void Persona_ctor(char* me);

#endif // PERSONA_H
