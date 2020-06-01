#include <stdio.h> //libreria estandar

//a continuacion se encuentra la opcion del tren ligero
float trenLigero(float *ptrSueldo, int *ptrAcuTren){
int viaje; //variable que guardara una opcion dada

if (*ptrSueldo<3){ //se evalua si hay saldo suficiente

printf("No puedes viajar en tren ligero con tu sueldo actual\n");

}else{

*ptrSueldo -= 3; //se descuentan 3 pesos al sueldo del usuario
*ptrAcuTren += 1; //se incrementa en 1 el numero de viajes en tren ligero

printf("Ya se desconto un viaje de trenLigero\n¿Desea descontar otro?\n1)SI\n2)NO\n");
scanf("%d",&viaje); //se escanea si el usuario desea descontar otro viaje

switch(viaje){ //se evalua la opcion dada

case 1: //caso afirmativo
	if(*ptrSueldo<3){ //se evalua si hay saldo disponible
	printf("No puedes viajar en el Tren LIgero con tu sueldo actual\n");
}else{
        *ptrSueldo -= 3; //se decrementa en 3 el saldo del usuario
        *ptrAcuTren += 1; //se aumenta en 1 el numero de viajes en tren ligero
        printf("Se desconto otro viaje de trenLigero\n");
	}
  	break; //fin caso afirmativo

case 2: //caso negativo
        printf("Gracias por viajar en el trenLigero\n");
        break; //fin caso negativo

default: //caso invalido
        printf("NO ES UN CASO VALIDO\n");
        break; //fin caso invalido

}
}
        return *ptrSueldo, *ptrAcuTren; //se devuelve al main el dato del sueldo restante y los viajes en tren ligero
}
