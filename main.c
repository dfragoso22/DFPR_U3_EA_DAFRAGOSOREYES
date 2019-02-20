/* 
*	Autor: Daniel Eleazar Fragoso Reyes
*	Facilitadora: Rita Flores Asis
*	Fecha 19 de Febrero de 2019
*	Universidad Abierta y a Distancia de M�xico
*/

//Librer�as estandar
#include <stdio.h>
#include <stdlib.h>

//Constante con el l�mite de tablas a mostrar
const LIMITE_TABLAS = 9;

//Funcion main, punto de entrada
int main(int argc, char *argv[]) {
	//Guarda el n�mero de tabla escogido por el usuario
	int tabla;
	//Guarda el nombre que el usuarui capture 
	char nombreUsuario[50];
	//Variable que guarda el resultado de la multiplicaci�n en cada iteraci�n del ciclo for de m�s abajo
	int resultadoActual;
	
	//Imprime una bienvenida al usuario y le solicita su nombre
	printf("Bienvenido a Las Tablas con C, dame tu nombre por favor: ");
	//Captura el nombre y lo guarda en la variable nombreUsuario
	scanf("%s", nombreUsuario);
	//Imprime en pantalla la solicitud al usuario del n�mero de tabla a mostrar
	printf("Hola %s escribe la tabla que deseas que te muestre: ",nombreUsuario);
	//Captura la tabla a mostrar y la guarda en la variable tabla
	scanf("%d", &tabla);
	
	//Valida si el n�mero de tabla esta entre 1 y la constante LIMITE_TABLAS que en �ste programa es = 9
	if(tabla>0 && tabla<=LIMITE_TABLAS){
		//Encabezado
		printf("\nMostrando tabla del %d\n",tabla);
		printf("==========================\n");
		//Ciclo for o Para, inicializa la variable i a 0 y ejecuta el ciclo mientras i sea menor a 10, aument�ndola en 1 entre cada iteraci�n
		int i;
		for(i=0;i<=10;i++){
			//Obtiene el resultado de la multiplicaci�n actual y lo guarda en la variable resultadoActual
			resultadoActual = i * tabla;
			//Muestra el resultado de esta operaci�n al usuario
			printf("%d * %d = %d\n",tabla,i,resultadoActual);
		}
		//Pie
		printf("==========================\n");
		
		//Despedida al usuario 
		printf("Listo, esa es la tabla del %d\n",tabla);
		printf("Adios %s.\n",nombreUsuario);
	}else{
		//En caso de que la tabla capturada por el usuario no est� entre 1 y 9 manda un mensaje al usuario
		printf("Lo siento, por ahora solo puedo mostrar tablas del 1 al 9");
	}
	
	//Retorna 0 indicando que no hubo excepciones en el programa
	return 0;
}
