#include <stdio.h> //libreria estandar

//a continuacion esta la funcion metrobus
float metrobus(float *ptrSueldo, int *ptrAcuMBus){
int viaje; //variable utilizada para guardar la opcion dada

if(*ptrSueldo<6){ //se evalua si hay dinero suficiente

printf("No puedes ingresar al metrobus con tu sueldo actual\n");

}else{

printf("Si puedes pagar esto\n");

    *ptrSueldo -= 6; //se descuentan 6 pesos al sueldo
    *ptrAcuMBus += 1; //se incrementa en uno los viajes en metrobus

printf("Ya se desconto un viaje de Metrobus\n¿Desea descontar otro?\n1)SI\n2)NO\n");
scanf("%d",&viaje); //se lee si el usuario desea descontar otro viaje

switch(viaje){ //se evalua la opcion dada

case 1: //opcion afirmativa
	if(*ptrSueldo<6){ //se evalua si hay saldo suficiente

	printf("No puedes viajar en el metrobus con tu sueldo actual\n");
}else{
        *ptrSueldo -= 6; //se descuentan 6 pesos al sueldo
        *ptrAcuMBus += 1; //se incrementa en 1 los viajes en metrobus acumulados
        printf("Se desconto otro viaje de Metrobus\n");
      	}
	break; //fin opcion afirmativa

case 2: //opcion negativa
        printf("Gracias por viajar en el Metrobus\n");
        break; //fin opcion negativa


default: //opcion no valida
        printf("NO ES UN CASO VALIDO\n");
        break; //fin opcion no valida

}
}
        return *ptrSueldo, *ptrAcuMBus; //se retorna al main los valores del sueldo y los viajes en metrobus
}
