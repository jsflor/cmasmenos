#include <stdio.h>
#include <stdlib.h>

int main(){
    /*****************************
        TIPOS DEFINIDOS
    *****************************/
    int x;
    float z;
    char y;

    x = 2;
    y = 3.5;
    z = 'A'
    /*****************************
        DEFINICION TIPOS SINONIMOS
    *****************************/
    typedef int TipoInt;
    typedef float TipoFloat;
    typedef char TipoChar;

    TipoInt i = 1;
    TipoFloat j = 1.2;
    TipoChar k = 'S'
    /*****************************
        DEFINICION TIPOS   
    *****************************/
    typedef enum TipoColor { Rojo, Verde, Azul };
    typedef enum TipoEstacion { Invierno, Verano };
    typedef enum bool { false, true };

    TipoColor colorCoche = Rojo;
    TipoEstacion estacionActual = Invierno;
    bool casado = false;
    /*****************************
        TIPO VECTOR   
    *****************************/
    const int NumeroElementos = 6;
    const int NumeroCaracteres = 10;
    typedef int TipoVectorInt[NumeroElementos];
    typedef TipoChar TipoString[NumeroCaracteres];

    TipoVectorInt vector1 = { 0, 1, 2, 3, 4 }; /*vector1[0] = 0*/   
    TipoVectorInt vector2;
    for(int i = 0; i < NumeroElementos; i++){
        vector2[i] = i;
    }
    TipoString nombre = 'Sebastian';
    /*****************************
        TIPO TUPLA O STRUCT   
    *****************************/
   typedef struct TipoCoche {
       int anno;
       TipoColor color;
       TipoString marca;
       TipoString modelo;
   };
   typedef struct TipoPunto {
       float x;
       float y;
   };

   TipoCoche coche = { 2009, Rojo, 'Fiat', 'Linea' };
   TipoPunto vector = { 3, 6 };

    return 0;
}
