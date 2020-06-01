/*Programa que calcula los gastos realizados en transporte. Autores: Jorge Salgado y Ricardo Ruelas.*/

#include <stdio.h> //libreria estandar
#include <stdbool.h> //libreria para emplear booleanos

//a continuacion se mandan a llamar archivos que contienen distintas funciones creadas para el programa
#include "metro.h" //archivo que contiene la funcion del metro
#include "cablebus.h" //archivo que contiene la funcion del cablebus
#include "ecobici.h" //archivo que contiene la funcion de la ecobici
#include "rtp.h" //archivo que contiene la funcion del rtp
#include "metrobus.h" //archivo que contiene la funcion del metrobus
#include "ruta.h" //archivo que contiene la funcion de ruta
#include "trenLigero.h" //archivo que contiene la funcion del tren ligero
#include "gasolina.h" //archivo que contiene la funcion de gasolina

FILE *arch; //variable que contendra el archivo de instrucciones.txt
float sueldo=0; //variable que contendra el dato del sueldo
int gasto = 0; //variable que servira como opcion
bool hola = true; //variable tipo booleana que ayuda a mantener el ciclo de menu hasta que se desee salir
char letra, caracter; //variable para no caer en loop por introducir un caracter en las opciones

//a continuacion se encuentran las variables que acumularan los viajes que se realicen de cada servicio
int AcuMetro=0;
int AcuCable=0;
int AcuEco=0;
int AcuRTP=0;
int AcuMBus=0;
int AcuRuta=0;
int AcuTren=0;
int AcuGas=0;

float gastoGas = 0; //variable que acumulara el gasto en gasolina

//a continuacion se encuentran los apuntadores que se dirigiran hacia las variables acumulativas para emplearlas en todo el programa
int *ptrAcuMetro;
int *ptrAcuCable;
int *ptrAcuEco;
int *ptrAcuRTP;
int *ptrAcuMBus;
int *ptrAcuRuta;
int *ptrAcuTren;
int *ptrAcuGas;
float *ptrGastoGas;
float *ptrSueldo;

//a continuacion comienza la funcion principal del programa
int main(){
//abajo se apuntan las variables con su respectivo ptr o apuntador
ptrGastoGas=&gastoGas;
ptrSueldo=&sueldo;
ptrAcuMetro=&AcuMetro;
ptrAcuCable=&AcuCable;
ptrAcuEco=&AcuEco;
ptrAcuRTP=&AcuRTP;
ptrAcuMBus=&AcuMBus;
ptrAcuRuta=&AcuRuta;
ptrAcuTren=&AcuTren;
ptrAcuGas=&AcuGas;

printf("\tBienvenido a tu calculadora de Gastos \n");
printf("Ingrese su sueldo mensual: ");
scanf("%f",&sueldo); //se escanea la variable que contendra el dato del sueldo dado por el usuario

printf("¿Que desea hacer?\n\n");

//a continuacion comienza el menu principal del programa
while (hola){
//debajo se presentan las opciones del menu
printf("1)Entrar al metro\n2)Usar el cablebus\n3)Rentar una ecobici\n4)Usar el rtp\n5)Entrar al metrobus\n6)Usar la ruta\n7)Entrar al Tren Ligero\n8)Cargar Gasolina\n9)Salir del programa\n10)Ver Instrucciones\n11)Ver gastos\nOpcion: ");
scanf("%d",&gasto); //con este scan se escanea la opcion dada por el usuario
scanf("%c",&letra); //con este scan se busca no caer en el loop al introducir un caracter

if (letra){
printf("\n"); //con esto nos aseguramos de no caer en loop por caracter
}

switch(gasto){ //se evalua la opcion dada y se entra a la sentencia elegida

case 1: //opcion del metro
	printf("Seleccionaste metro\n\n");
	metro(ptrSueldo, ptrAcuMetro); //se llama a la funcion metro y se le pasan dos apuntadores
	printf("Tu sueldo actual es %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin del switch

case 2: //opcion del cablebus
	printf("Seleccionaste cablebus\n\n");
	cablebus(ptrSueldo, ptrAcuCable); //se llama a la funcion cablebus y se le pasan dos apuntadores
	printf("Tu sueldo actual es de: %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin del switch

case 3: //opcion de la ecobici
	printf("Seleccionaste ecobici\n\n");
	ecobici(ptrSueldo, ptrAcuEco); //se llama a la funcion ecobici y se le pasan dos apuntadores
	printf("Tu sueldo actual es de: %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin de la opcion ecobici

case 4: //opcion del rtp
	printf("Seleccionaste rtp\n\n");
	rtp(ptrSueldo, ptrAcuRTP); //se llama a la funcion rtp y se le pasan dos apuntadores
    printf("Tu sueldo actual es de: %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin de la opcion rtp

case 5: //opcion del metrobus
	printf("Seleccionaste metrobus\n\n");
	metrobus(ptrSueldo, ptrAcuMBus); //se llama a la funcion metrobus y se le pasan dos apuntadores
    printf("Tu sueldo actual es %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin opcion del metrobus

case 6: //opcion del ruta
	printf("Seleccionaste ruta\n\n");
	ruta(ptrSueldo, ptrAcuRuta); //se llama a la funcion ruta y se le pasan dos apuntadores
    printf("Tu sueldo actual es %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin opcion ruta

case 7: //opcion tren ligero
	printf("Seleccionaste Tren Ligero\n\n");
	trenLigero(ptrSueldo, ptrAcuTren); //se llama a la funcion tren ligero y se le pasan dos apuntadores
    printf("Tu sueldo actual es %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin opcion tren ligero

case 8: //opcion para gasolina
	printf("Seleccionaste gasolina\n\n");
	gasolina(ptrSueldo, ptrAcuGas, ptrGastoGas); //se llama a la funcion gasolina y se le pasan tres apuntadores
    printf("Tu sueldo actual es %0.2f\n\n¿Que mas te gustaria hacer?\n", *ptrSueldo); //se imprime el sueldo restante
	break; //fin opcion para gasolina

case 9: //opcion que permite salir del programa
	printf("Gracias por usar la calculadora de gastos\n Hasta la proxima :)\n");
	hola = false; //se cambia el valor de la bandera para terminar el ciclo
	break; //fin de la opcion para salir del programa

case 10: //opcion para abrir el archivo de texto que contiene las instrucciones de la calculadora
	printf("INSTRUCCIONES: \n");
    arch=fopen("instrucciones.txt","r+"); //se abre el archivo de texto
    if(arch==NULL){ //se verifica si el archivo de texto existe
        printf("Error al abrir el archivo\n"); //se indica al usuario que hubo un error al intentar abrir el archivo
        return -1; //se indica al sistema que hubo un error al intentar abrir el archivo
    }
    while((caracter=fgetc(arch))!= EOF){ /*se crea el ciclo para escribir en la consola lo que esta dentro del archivo de texto
                                           hasta llegar al EOF o caracter final del archivo*/
        printf("%c", caracter); //se imprime caracter por caracter
    }
	fclose(arch); //se cierra el archivo de texto
	break; //fin de la opcion para archivo de instrucciones

case 11:
    //a continuacion se muestra el total de viajes y monto gastado en cada servicio utilizando \t para tabular los datos
    //de igual manera se muestra el sueldo restante
    printf("Servicio\tViajes\t\tMonto Gastado\n");
    printf("Metro\t\t%d\t\t%d\n", *ptrAcuMetro, (*ptrAcuMetro * 5));
    printf("Cablebus\t%d\t\t%d\n", *ptrAcuCable, (*ptrAcuCable * 5));
    printf("Ecobici\t\t%d\t\t%d\n", *ptrAcuEco, (*ptrAcuEco * 13));
    printf("RTP\t\t%d\t\t%d\n", *ptrAcuRTP, (*ptrAcuRTP * 3));
    printf("Metrobus\t%d\t\t%d\n", *ptrAcuMBus, (*ptrAcuMBus * 6));
    printf("Ruta\t\t%d\t\t%0.2f\n", *ptrAcuRuta, (*ptrAcuRuta * 5.5));
    printf("Tren Ligero\t%d\t\t%d\n", *ptrAcuTren, (*ptrAcuTren * 3));
    printf("Gasolina\t%d\t\t%0.2f\n", *ptrAcuGas, *ptrGastoGas);
    printf("\nSu sueldo restante es: %0.2f\n\n", *ptrSueldo);
    break; //fin del switch

default: //opcion invalida, es decir, que no esta dentro del conjunto de las opciones ofrecidas
	printf("Esa opcion no es valida\n Ingresa una nuevamente \n\n");
	break; //fin opcion invalida
}
}

return 0; //finaliza el programa y se retorna un entero para indicar que todo salio con exito
}
