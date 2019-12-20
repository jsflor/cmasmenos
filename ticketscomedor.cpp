#include <stdio.h>

typedef int Entero;
typedef float Flotante;
typedef char Caracter;
typedef enum TipoMes {
    Enero, Febrero, Marzo,
    Abril, Mayo, Junio,
    Julio, Agosto, Septiembre,
    Octubre, Noviembre, Diciembre
};

int main(){
    const Flotante Menu = 8.5;
    const Flotante IVAMenu = 7.0;

    TipoMes mes;
    Entero dias, diasPagar, diasFaltas, aux;
    Flotante total, totalIVA;
    Caracter tecla;

    /*-- Leer y validar mes --*/
    do {
        printf("Mes? ");
        scanf("%d", &aux);
    } while( (aux < 1) || (aux > 12) );
    mes = TipoMes(aux-1);

    /*-- Calcular dia segun mes --*/
    switch (mes){
    case Agosto:
        dias = 0;
        break;
    case Enero:
    case Abril:
    case Diciembre:
        dias = 17;
        break;
    case Febrero:
    case Septiembre:
        dias = 20;
        break;
    case Junio:
    case Noviembre:
        dias = 21;
        break;
    case Marzo:
    case Julio:
        dias = 22;
        break;
    case Mayo:
    case Octubre:
        dias = 23;
        break;
    }

    /*-- Confeccionar tickets a partir ausencias --*/
    do{
        printf("Total Ausencias? ");
        scanf("%d", &diasFaltas);
        printf("--------------------------\n");
        diasPagar = dias - diasFaltas;
        total = diasPagar*Menu;
        totalIVA = total*IVAMenu/100.0;
        printf("   RECIBO COMEDOR\n");
        printf("Comidas    Precio    Total\n");
        printf("%4d%11.2f%13.2f\n", diasPagar, Menu, total);
        printf("          %3.1f %% IVA   %6.2f\n", IVAMenu, total);
        printf("    Total Recibo %8.2f Euros\n", total+totalIVA);
        printf("--------------------------\n");

        tecla = ' ';
        printf("Otro Recibo(S/N)? ");
        while((tecla != 'S') && (tecla != 'N')){
            scanf("%c", &tecla);
        }
    } while (tecla != 'N');

    return 0;
}
