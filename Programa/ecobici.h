#include <stdio.h> //libreria estandar

//a continuacion comienza la funcion de la ecobici
float ecobici(float *ptrSueldo, int *ptrAcuEco){
int viaje; //variable empleada para guardar la opcion elegida
if(*ptrSueldo<13){ //se evalua si hay saldo suficiente

printf("No puedes rentar una ecobici con tu sueldo actual\n");

}else{

*ptrSueldo -= 13; //se descuentan 13 pesos al sueldo
*ptrAcuEco += 1; //se incrementan en 1 los viajes en ecobici

printf("Ya se desconto la renta de una Ecobici\n¿Desea descontar otro?\n1)SI\n2)NO\n");
scanf("%d",&viaje); //se lee si el usuario desea descontar un segundo viaje

switch(viaje){ //se evalua la opcion dada

case 1: //caso afirmativo
	if(*ptrSueldo<13){ //se verifica si hay saldo suficiente

printf("No puedes rentar una bicicleta con tu sueldo actual\n");

}else{
        *ptrSueldo -= 13; //se descuentan 13 pesos al sueldo
        *ptrAcuEco += 1; //se aumenta en 1 la cantidad de viajes en ecobici
        printf("Se desconto otra renta de Ecobici\n");
}
        break; //fin del caso afirmativo

case 2: //caso negativo
        printf("Gracias por viajar en el la Ecobici\n");
        break; //fin caso negativo

default: //caso invalido o no dado
        printf("NO ES UN CASO VALIDO\n");
        break; //fin del caso invalido
}
}
        return *ptrSueldo, *ptrAcuEco; // se regresan los valores del sueldo y los viajes en ecobici al main
}

