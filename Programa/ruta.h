#include <stdio.h> //libreria estandar

//comienza la funcion ruta
float ruta(float *ptrSueldo, int *ptrAcuRuta){
int viaje;//variable utilizada como opcion

if(*ptrSueldo<5.5){ //se evalua si hay saldo disponible

printf("No puedes ingresar con tu sueldo actual a la ruta\n");

}else{

*ptrSueldo -= 5.5; //se descuentan 5.5 pesos al sueldo
*ptrAcuRuta += 1; //se incrementa en 1 el numero de viajes en ruta

printf("Ya se desconto un viaje de Ruta\n¿Desea descontar otro?\n1)SI\n2)NO\n");
scanf("%d",&viaje); //se lee si se desea descontar otro viaje en ruta

switch(viaje){ //se evalua la opcion

case 1: //opcion afirmativa
	if(*ptrSueldo<5.5){ //se evalua si hay sueldo disponible
	printf("No puedes viajar en la ruta con tu sueldo actual\n");
}else{
        *ptrSueldo -= 6; //se descuentan 6 pesos al sueldo
        *ptrAcuRuta += 1; //se incrementa en 1 el numero de vaijes en ruta
        printf("Se desconto otro viaje de ruta\n");
	}
 	break; //fin opcion afirmativa

case 2: //opcion negativa
        printf("Gracias por viajar en la Ruta\n");
        break; //fin opcion negativa

default: //opcion invalida
        printf("NO ES UN CASO VALIDO\n");
        break; //fin opcion invalida
}
}
        return *ptrSueldo, *ptrAcuRuta; //se regresan los valores del sueldo y la cantidad de viajes en ruta, al main
}
