//Primer programa al que le pongo empeño :'v pero soy nub :'v 3:03AM 
//xd use char para el menu, eso esta mal, quiza lo arregle :v
//Funciona bien, solo, necesito optimizar el codigo hay demasiadas cosas de más
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void opcion();
int main();
char men[2]; //para regresar al menu s/n :v


int salir(){
	printf("¿Realmente desea salir? :'v (s/n) ");
	scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					system("clear");
					return 0;
				}
				else if(strcmp(men,"n") == 0){
					main();
				}
				else{
					printf("Error :'v\n");
				}
}


void suma(){
	int n,s=0,i,j;
	system("clear");
	printf("\n");
	printf("Elegiste Suma\n\n");
	printf("¿Cuantos numeros desea sumar?\n");
	scanf("%d",&n);
		for(i=1; i<=n; i++){
			printf("Introduce tu %d numero: ",i);
			scanf("%d",&j);
			s += j;
		}

		printf("El resultado de la suma es: %d\n", s);
		
		printf("\n");
		printf("¿Desea continuar sumando? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			suma();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}		
}

void resta(){
	int r=0,a,b;
	system("clear");
	printf("\n");
	printf("Elegiste Resta\n\n");
	printf("Ingresa el primer numero: ");
	scanf("%d", &a);
	printf("Ingresa el segundo numero: ");
	scanf("%d", &b);
	r = a-b;
	printf("El resultado de la resta es: %d\n", r);
	
	printf("\n");
		printf("¿Desea continuar restando? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			resta();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}	
}

void multiplicacion(){
	int n,m=1,i,j;
	system("clear");
	printf("\n");
	printf("Elegiste Multiplicacion\n\n");
	printf("¿Cuantos numeros desea multiplicar?\n");
	scanf("%d",&n);
		for(i=1; i<=n; i++){
			printf("Introduce tu %d numero: ",i);
			scanf("%d",&j);
			m = m * j;
		}

		printf("El resultado de la multiplicacion es: %d\n", m);
			
			printf("\n");
		printf("¿Desea continuar multiplicando? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			multiplicacion();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}	
}

void division(){
		int d=0,a,b;
		system("clear");
		printf("\n");
		printf("Elegiste Division\n\n");
		printf("Ingresa el Divisor: ");
		scanf("%d",&a);
		printf("Ingresa el Dividendo: ");
		scanf("%d",&b);
		d = a / b;
		printf("El resultado de la division es: %d\n", d);
			
			printf("\n");
		printf("¿Desea continuar dividiendo? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			division();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}	

}

void potencia(){
	int a,b,i;
	system("clear");
	printf("\n");
	printf("Elegiste Elevar a una Potencia\n\n");
	printf("Ingresa el numero: ");
	scanf("%d",&a);
	printf("Ingresa la potencia: ");
	scanf("%d",&b);
		for(i=1; b>0; b--){
			i *= a;
		}

		printf("El resultado es: %d\n",i);
		
			printf("\n");
		printf("¿Desea continuar con las potencias? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			potencia();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}	
}

void raiz(){
	float a,b,r=0;
	system("clear");
	printf("\n");
	printf("Elegiste Raiz\n\n");
	printf("Ingresa el numero: ");
	scanf("%f",&a);
	printf("Ingresa el numero de raiz que deseas: ");
	scanf("%f",&b);

	r = pow(a,(float)1/b);

	printf("La raiz %.0f de %.0f es: %.2f\n", b, a, r);

	printf("\n");
		printf("¿Desea continuar con las raices? (s/n) ");
		scanf("%s",&men);
		if(strcmp(men,"s") == 0){
			system("clear");
			raiz();
		}
		else if(strcmp(men,"n") == 0){

				printf("¿Desea regresar al menu?, ingrese 's' para regresar ó 'n' para salir\n");
				scanf("%s", &men);
				if(strcmp(men,"s") == 0){
					main();
				}
				else if(strcmp(men,"n") == 0){
					salir();
				}
				else{
					printf("Error :'v\n");
				}
			
		}
		else{
			printf("Error :'v\n");
		}	
		
}


void opcion(int o){
	switch(o){
		case 1:
			suma();
			break;
		
		case 2:
			resta();
			break;
		
		case 3:
			multiplicacion();
			break;

		case 4:
			division();
			break;

		case 5:
			potencia();
			break;

		case 6:
			raiz();
			break;

		case 7:
			salir();
			break;

		default:
			printf("La opcion que elegiste es incorrecta :'v\n");
	}

}


int main(){
	int o;
	system("clear");

	printf("Calculadora by G-L :v\n");
	printf("¿Que desea hacer?\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("5. Elevar a una potencia\n");
	printf("6. Raiz \n");
	printf("7. Salir\n");
	printf("Ingresa la opcion que desees :v\n");
	scanf("%d", &o);
	opcion(o);

	return 0;
}
