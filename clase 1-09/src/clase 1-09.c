/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int PedirNumeroEntero(void);

int ValidarEnteroCeroaCien(int numero);

void MostrarEntero(int numero);


/****
Ejercicio 3-1:
Crear una función que muestre por pantalla el número flotante que recibe como parámetro.

Ejercicio 3-2:
Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo
y 0 en caso contrario. Probar en el main.

Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.


*******/
//3-1
float PedirNumeroFlotante();
void MostrarNumeroFlotante(float numero);
//3-2
int ParoImpar(int numero);
//3-3
int PedirEntero();
//3-4
int PedirEnteroConRango(int minimo, int mayor);


int main(void) {

	setbuf(stdout, NULL);

	/*
	int numero;
	int retorno;

	do{
		numero = PedirNumeroEntero();

		retorno=ValidarEnteroCeroaCien(numero);

	}while(retorno == 0); //0= FLASE & 1= TRUE

	MostrarEntero(numero);*/
/*EJERCICIO 3-1
	float numero;

	numero=PedirNumeroFlotante();

	MostrarNumeroFlotante(numero);
	*/

	/*
	EJERCICIO3-2
	 int numero =103;

	    int devuelve;

	    devuelve=ParoImpar(numero);
	    if(devuelve==1)
	    {
	        printf("el numero %d es par", numero);
	    }
	    else
	    {
	        printf("el numero %d es impar", numero);
	    }
	    */

	//EJERCICIO3-4


	return EXIT_SUCCESS;
}



int PedirNumeroEntero(void){
	int numeroIngresado;

	printf("\n Ingrese un numero entero: ");
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}


int ValidarEnteroCeroaCien(int numero)
{
	int flagValidacion=1;

	if(numero<0 || numero >100)
	{
		flagValidacion=0;
	}
	return flagValidacion;
}

void MostrarEntero(int numero)
{
	printf("\n Numero Entero ingresado: %d ",numero);
}



float PedirNumeroFlotante()
{
	float numero;

	printf("\nIngrese numero Flotante: ");
	scanf("%f",&numero);

	return numero;
}
void MostrarNumeroFlotante(float numero)
{
	printf("Numero Flotante Ingresado: %.2f", numero);
}


int ParoImpar(int numero)
{
    int retornoPar=0;

    if(numero %2 == 0)
    {
        retornoPar=1;
    }
    return retornoPar;
}
int PedirEntero()
{
    int retorno;

    printf("Ingrese Numero Entero: ");
    scanf("%d", &retorno);

    return retorno;
}


int PedirEnteroConRango(int minimo, int mayor)
{
	int numero;
	int flag;
	flag=0;

	do{
	numero=PedirEntero();

	if(numero < mayor && numero > minimo)
	{
		flag=1;
	}
	}while(flag==0);
	return flag;
}

