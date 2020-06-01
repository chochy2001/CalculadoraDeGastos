#include <stdio.h> //libreria estandar

//a continuacion comienza la funcion del rtp
float rtp(float *ptrSueldo, int *ptrAcuRTP){
int viaje; //variable empleada para guardar la opcion elegida

if(*ptrSueldo<3){ //se evalua si queda saldo suficiente

printf("No puedes entrar al rtp\n");

}else{

*ptrSueldo -= 3; //se descuentan 3 pesos al sueldo
*ptrAcuRTP += 1; //se aumenta en 1 los viajes en rtp

printf("Ya se desconto un viaje de rtp\n¿Desea descontar otro?\n1)SI\n2)NO\n");
scanf("%d",&viaje); //se lee si el usuario desea descontar otro viaje

switch(viaje){ //se evalua la opcion dada

case 1: //caso afirmativo

	if(*ptrSueldo<3){ //se evalua si queda saldo suficiente
	printf("No puedes viajar en el rtp con tu sueldo actual\n");
    }
else{
        *ptrSueldo -= 3; //se descuentan 3 pesos al sueldo
        *ptrAcuRTP += 1; //se aumenta en 1 los viajes en rtp
        printf("Se desconto otro viaje de rtp\n");
}
        break; //fin caso afirmativo

case 2: //caso negativo
        printf("Gracias por viajar en el rtp\n");
        break; //fin caso negativo

default: //caso invalido
        printf("NO ES UN CASO VALIDO\n");
        break; //fin caso invalido


}
}
        return *ptrSueldo, *ptrAcuRTP; //se regresa al main el valor del sueldo restante y los viajes en rtp acumulados
}
