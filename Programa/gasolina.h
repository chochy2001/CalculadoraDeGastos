#include <stdio.h> //libreria estandar

//a continuacion empieza la funcion de gasolina
float gasolina(float *ptrSueldo, int *ptrAcuGas, float *ptrGastoGas){
float gasto = 0; //variable que guardara el gasto en gasolina introducido por el usuario

printf("Inserta el gasto en Gasolina: ");
scanf("%f", &gasto); //se introduce el gasto en gasolina

if(gasto>*ptrSueldo){ //se evalua si el usuario tiene el saldo disponible para realizar dicha compra
printf("\nNo puedes gastar esa cantidad en gasolina\n");
}
else{
*ptrSueldo = *ptrSueldo - gasto; //se descuenta al sueldo el gasto en gasolina introducido
*ptrGastoGas = *ptrGastoGas + gasto; //se acumula el gasto en gasolina total del usuario
*ptrAcuGas += 1; //se aumenta en 1 la cantidad de veces que el usuario ha cargado gasolina
}

printf("Gracias por viajar en coche\n");

return *ptrSueldo, *ptrAcuGas, *ptrGastoGas; /*se retorna al main los datos del sueldo, la cantidad de cargas
                                               que ha realizado y su gasto en gasolina acumulado*/
}
