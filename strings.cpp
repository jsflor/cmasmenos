#include <stdio.h>
#include <string.h>

const int longitudString = 20;
const int longitudTexto = 100;

typedef char Caracter;
typedef Caracter TipoString[longitudString];
typedef Caracter TipoTexto[longitudTexto];

int main(){
    TipoString nombre, apellido;
    TipoTexto texto;
    int result;

    printf("Nombre y Apellidos? ");
    scanf("%s%s", nombre, apellido);
    printf("Datos: %s - %s \n", nombre, apellido);
    printf("Longitudes: %4d%4d\n", strlen(nombre), strlen(apellido));
    strcpy( texto, nombre );
    printf("Texto copiado: %s\n", texto);
    strcat( texto, apellido);
    printf("Texto concatenado: %s\n", texto);
    result = strcmp( apellido, nombre );

    if(result == 0){
        printf("Nombre y Apellidos iguales");
    } else if (result > 0){
        printf("%s es anterior a %s\n", nombre, apellido);
    }

    return 0;
}
