#include "persona.h"
#include "alumno.h"
#include <iostream>
#include "cstring"
using namespace std;
void manejoDeClase()
{
    //La instancia de esta persona esta en el stack
    const int personaTamano = 104;
    char persona[personaTamano];
    //La instancia de esta persona esta en el heap
//  char* persona = ((char*)(malloc(104)));
    Persona_ctor(persona);
    cout << Persona_getNombre(persona) << "\n";
    cout << Persona_getEdad(persona) << "\n";
    Persona_setNombre(persona,"Carlos");
    Persona_setEdad(persona,30);
    cout << Persona_getNombre(persona) << "\n";
    cout << Persona_getEdad(persona) << "\n";
    cout << sizeof(Persona) << "\n";;

    const int alumnoTamano = 108;
    char alumno[alumnoTamano];
    Alumno_ctor(alumno);
    cout << Persona_getNombre(alumno) << "\n";
    cout << Persona_getEdad(alumno) << "\n";
    cout << Alumno_getPromedio(alumno) << "\n";

    Persona_setNombre(alumno,"Miguel");
    Persona_setEdad(alumno,25);
    Alumno_setPromedio(alumno,83);
    cout << Persona_getNombre(alumno) << "\n";
    cout << Persona_getEdad(alumno) << "\n";
    cout << Alumno_getPromedio(alumno) << "\n";

    Persona personaClase;
    personaClase.setNombre("Bowser");
    personaClase.setEdad(25);
    cout << personaClase.getNombre() << "\n";
    cout << personaClase.getEdad()<< "\n";

    Persona_setEdad((char*)&personaClase,30);
    cout << personaClase.getNombre() << "\n";
    cout << personaClase.getEdad()<< "\n";
}
void arregloDePersona()
{
    char* nombres[5] = {
        "Mario","Luigi","Peach","Bowser","Rosalina"
    };
    const int personaTamano = 104;
    const int arregloTamano = 5;
    // persona arregloPersona[5];
    char* arregloPersona = (char*)(malloc(personaTamano*arregloTamano));
    for (int i = 0; i < arregloTamano; ++i)
    {
        *((int*)(arregloPersona + personaTamano*i)) = i*2+20;
        strcpy((char*)(arregloPersona + personaTamano*i + 4),nombres[i]);
    }
    for (int i = 0; i < arregloTamano; ++i)
    {
        cout << *((int*)(arregloPersona + personaTamano*i)) << "\n";
        cout << (char*)(arregloPersona + personaTamano*i + 4) << "\n";
    }
    return;
}

void registro()
{
//  Registro/Struct de 1 entero
//  y un char de 100
    void* reg = ((void*)(malloc(104)));
//  reg.edad = 6
    *((int*)(reg)) = 6;
//  strcpy(reg.nombre,"Carlos")
    strcpy((char*)reg + 4,"Carlos");
    cout << (*((int*)(reg)));
    cout << ("\n");
    cout << ((char*)reg + 4);
    cout << ("\n");
//  TODO: Arreglo de registros
}

void arreglo()
{
    unsigned int intSize = sizeof(int);
    char* array = ((char*)(malloc(intSize* 5)));
    // array[2] = 6;
    *((int*)(array + 2*intSize)) = 6;
    cout << *((int*)(array + 2*intSize)) << "\n";

    for (int i = 0; i < 5; ++i)
        *((int*)(array + i*intSize)) =i*3 ;

    for (int i = 0; i < 5; ++i)
        cout << *((int*)(array + i*intSize)) << "\n";

    int * intArray = (int*)array;
    for (int i = 0; i < 5; ++i)
        cout << intArray[i] << "\n";;
    // TODO: Arreglos multidmiensionales
}
void arregloMultidimensional()
{
    //ejemplo de arrego[x,y]
    unsigned int intSize = sizeof(int);
    // int arregloMultidimensional[3,4]
    int tamanoDimm1 = 3;
    int tamanoDimm2 = 4;
    int tamanoEnMemoria = intSize * tamanoDimm1 *tamanoDimm2;
    char* arregloMultidimensional = ((char*)(malloc(tamanoEnMemoria)));
    // arregloMultidimensional + (dimm1*tamanoDimm2 + dimm2)*intSize)
    // base + (i*y + j)*sizeof(type)
    // arregloMultidimensional[i,j] = i*10 + j
    for (int dimm1 = 0; dimm1 < tamanoDimm1;dimm1++)
        for(int dimm2 = 0;dimm2 < tamanoDimm2;dimm2++)
            *((int*)(arregloMultidimensional + (dimm1*tamanoDimm2 + dimm2)*intSize)) = dimm1*10 + dimm2;
    // cout << arregloMultidimensional[i,j] << "\n"
    for (int dimm1 = 0; dimm1 < tamanoDimm1;dimm1++)
        for(int dimm2 = 0;dimm2 < tamanoDimm2;dimm2++)
            cout << *((int*)(arregloMultidimensional + (dimm1*tamanoDimm2 + dimm2)*intSize)) << "\n";

//    int *intArray = (int*)arregloMultidimensional;
//    for(int i = 0; i < tamanoDimm1*tamanoDimm2;i++)
//        cout << intArray[i] << "\n";

}

int main()
{
    arregloDePersona();
}

void persona()
{
    /*Persona persona1;
    Persona persona2;
    persona1.edad = 10;
    persona2.edad = 21;
    strcpy(persona1.nombre,"Miguel");
    strcpy(persona2.nombre,"Angel");
    persona1 = persona2;
    persona1.edad = 22;
    cout<<persona2.nombre << " \n";
    cout<<persona2.edad << " \n";
    cout<<persona1.nombre << " \n";
    cout<<persona1.edad << " \n";
    system("pause");
    return 0;*/
}

void personaApuntador()
{
    /*Persona *persona1;
    persona1 = new Persona;
    auto persona2 = new Persona;
    (*persona1).edad = 10;
    persona2->edad = 21;
    strcpy(persona1->nombre,"Miguel");
    strcpy(persona2->nombre,"Angel");
    persona1 = persona2;
    persona1->edad = 22;
    cout<<persona2->nombre << " \n";
    cout<<persona2->edad << " \n";
    cout<<persona1->nombre << " \n";
    cout<<persona1->edad << " \n";
    system("pause");
    return 0;*/
}
