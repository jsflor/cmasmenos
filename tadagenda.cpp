#include <stdio.h>
#include <string.h>

typedef int Entero;
typedef char Caracter;

const Entero LongitudNombre = 30;
const Entero LongitudContactos = 100;

typedef Caracter TipoNombre[LongitudNombre];

typedef struct TipoContacto {
    TipoNombre nombre;
    Entero numero;

    void init(Caracter nombre[], Entero numero);
};

void TipoContacto::init(Caracter nombre[], Entero numero){
    strcpy(this->nombre, nombre);
    this->numero = numero;
}

typedef TipoContacto TipoContactos[LongitudContactos];

typedef struct TipoAgenda{
    void init();
    void insertar(TipoContacto contacto);
    void listar();
    
    private:
    TipoContactos contactos;
    Entero numeroContactos;
};

void TipoAgenda::init(){
    numeroContactos = 0;
}

void TipoAgenda::insertar(TipoContacto contacto){
    contactos[numeroContactos] = contacto;
    numeroContactos = numeroContactos+1;
}

void TipoAgenda::listar(){
    printf("------Agenda------\n");
    for(int i = 0; i < numeroContactos; i++){
        printf("%d -  %s - %d\n", i+1 ,contactos[i].nombre, contactos[i].numero);
    }
}


int main(){
    TipoAgenda agenda;
    TipoContacto contacto1, contacto2, contacto3;

    contacto1.init("sebastian", 123456);
    contacto2.init("ana", 654321);
    contacto3.init("olga", 654321);

    agenda.init();
    agenda.insertar(contacto1);
    agenda.insertar(contacto2);
    agenda.insertar(contacto3);
    agenda.listar();

    return 0;
}
