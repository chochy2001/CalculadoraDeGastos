#include <stdio.h> //libreria estandar

//a continuacion comienza la funcion del cablebus
float cablebus(float *ptrSueldo, int *ptrAcuCable){//se obtienen las variables de la funcion main para el sueldo y los viajes
int viaje; //variable que guarda una opcion elegida

if(*ptrSueldo<5){//se evalua si se cuenta con el saldo suficiente

printf("No puedes usar el cablebus con tu sueldo actual\n");

}else{

*ptrSueldo -= 5; //se descuentan 5 pesos al sueldo s
*ptrAcuCable += 1; //se incrementan en 1 los viajes

printf("Ya se desconto un viaje de Cablebus\n¿Desea descontar otro?\n1)SI\n2)NO\n"); //se pregunta si se desea agregar otro viaje en cablebus
scanf("%d",&viaje); //se lee la opcion

switch(viaje){//se evalua la opcion dada

case 1:
	if(*ptrSueldo>5){//se evalua si se cuenta con saldo suficiente
        *ptrSueldo -= 5; //se descuentan 5 pesos al sueldo
        *ptrAcuCable += 1; //se incrementa en 1 los viajes en cablebus
        printf("Se desconto otro viaje de Cablebus\n");
        }else{

	printf("No puedes viajar de nuevo con tu sueldo actual\n");

}
	break; //fin del switch

case 2: //opcion por si no se desea agregar otro viaje
        printf("Gracias por viajar en el Cablebus\n");
        break;

default: //caso por si la opcion es invalida
        printf("NO ES UN CASO VALIDO\n");
        break;

}
}
        return *ptrSueldo, *ptrAcuCable; //se regresan las variables sueldo y viajes al main
}

