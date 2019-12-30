/*************************************
* NOMBRE: #Juan Sebastian#
* PRIMER APELLIDO: #Flor#
* SEGUNDO APELLIDO: #Usma#
* DNI: #54361019J#
* EMAIL: #Sebastian-flor@hotmail.com#
*************************************/

#include <stdio.h>

int main () {

  int lado;                                                   /* longitud del lado m�s externo del rombo */
  int linea;                                                  /* n�mero de linea */
  int num;                                                    /* contador de car�cteres */
  int k;                                                      /* contador de blancos */



  /*=============================================================================================================
                                              LEER EL LADO DEL ROMBO
  ==============================================================================================================*/

  printf ("�Lado del Rombo?");
  scanf ("%d", &lado);
  printf ("\n");

  /*=============================================================================================================
                                              IMPRIMIR EL ROMBO
  ==============================================================================================================*/

  if ( lado == 1) {
      printf ("@\n");
      }

  if  ( lado > 1) {

    if ( lado <= 20 ){

      /*--- Imprimir tri�ngulo superior ---*/

      for ( int linea = 1; linea <= lado; linea ++ ) {        /* definici�n del n�mero de lineas en el triangulo
                                                              superior */
        /*--- Imrimir mitad izquierda
        tri�ngulos superiores ---*/

        for ( int k = 1; k <= (lado - linea ); k ++) {        /* imprimir espacios en blanco entre margen y rombo*/
          printf (" ");
          }

        for  (int num = 1; num <= linea; num ++) {            /* definici�n del n�mero de car�cteres en la parte
                                                              superior izquierda del rombo */
          if ( num % 4 == 1){                                  /* secuencia de car�cteres que forma la parte superior
                                                              izquierda del rombo */
            printf ("@");
            }
          if ( num % 4 == 2){
            printf (".");
            }
          if ( num % 4 == 3){
            printf ("o");
            }
          if ( num % 4 == 0){
            printf (".");
            }
          }

        /*--- Imprimir mitad derecha
        tri�ngulos superiores ---*/

        for ( int num = linea; num >= 2 ; num -- ){            /* definici�n del n�mero de car�cteres en la parte
                                                                  superior derecha del rombo */

          if ( num % 4 == 2){                                  /* secuencia de car�ctres que forman el lado derecho
                                                                  del rombo*/
            printf ("@");
            }
          if ( num % 4 == 3) {
            printf (".");
            }
          if ( num % 4 == 0){
            printf ("o");
            }
          if ( num % 4 == 1){
            printf (".");
            }
          }
        printf ("\n");
        }

      /*--- Imprimir tri�ngulo inferior ---*/

      for ( int linea = 1; linea <= lado ; linea ++){             /* definici�n del n�mero de lineas en el triangulo
                                                                  inferior */

        /*--- Imprimir mitad izquierda
        tri�ngulos inferior ---*/
        for ( int k = 1;  k <= linea; k ++){                    /* imprimir espacios en blanco entre margen y rombo*/
          printf (" ");
          }
        for (int num = 1 ; num <= ( lado - linea ); num ++ ) {  /*  definici�n del n�mero de car�cteres a imprimir en
                                                                  en la parte inferior izquierda */
          if (num %4 == 1 ){                                    /* definici�n de la secuencia de car�cteres para
                                                                  dibujar la parte inferior izquierda */
            printf ("@");
            }
          if (num %4 == 2 ){
            printf (".");
            }
          if (num %4 == 3 ) {
            printf ("o");
            }
          if (num %4 ==0 ) {
            printf (".");
            }
          }
        /*--- Imprimir mitad derecha
        tri�ngulos inferior ---*/
        for ( int num = (lado - linea); num >= 2; num -- ) {     /* definici�n del n�mero de car�cteres que forman
                                                                    la mitad derecha del tri�ngulo inferior */
          if ( num %4 == 2){                                      /* definici�n de la secuencia de car�cteres para dibujar
                                                                    la mitad derecha del tri�ngulo inferior */
            printf ("@");
            }
          if ( num %4 == 3){
            printf (".");
            }
          if (num %4 == 0){
            printf ("o");
            }
          if (num %4 == 1){
            printf (".");
            }
          }
        printf ("\n");
        }
      }
    }
  }
