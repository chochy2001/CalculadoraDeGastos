#include <stdio.h> //libreria estandar

//a continuacion comienza la funcion del servicio del metro
float metro(float *ptrSueldo, int *ptrAcuMetro){
int viaje; //variable que sirve para guardar una opcion

if(*ptrSueldo<5){//se evalua si el sueldo alcanza para el servicio

printf("No puedes entrar al metro con tu sueldo actual\n "); //se avisa al usuario que  no cuenta con el saldo suficiente

}else{

printf("Si puedes pagar esto\n");

*ptrSueldo -= 5; //se descuenta 5 pesos al sueldo
*ptrAcuMetro += 1; //se incrementan los viajes en 1

printf("Ya se desconto un viaje de Metro\n¿Desea descontar otro?\n1)SI\n2)NO\n"); //se pregunta si se desea descontar otro viaje
scanf("%d",&viaje); //se escanea la opcion

switch(viaje){//se evalua la opcion dada

case 1:
	if(*ptrSueldo>5){//se evalua si se cuenta con el saldo suficiente
        *ptrSueldo -= 5; //se desuentan 5 pesos al sueldo
        *ptrAcuMetro += 1; //se incrementa en 1 el numero de viajes en metro
        printf("Se desconto otro viaje de Metro\n");
	}else{
	printf("No puedes viajar de nuevo con tu saldo actual\n");
}
break; //fin del switch

case 2: //opcion si no se quiere agregar otro viaje
        printf("Gracias por viajar en el metro\n");
        break;
default: //opcion si no se elige una opcion correcta
	printf("NO ES UN CASO VALIDO\n");
	return viaje;
	break;

}
}
return *ptrSueldo, *ptrAcuMetro; //se regresan los valores del sueldo y los viajes a la funcion main
}
