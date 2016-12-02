#include <stdio.h>
#include <stdlib.h>


int ordenado( int *numeros, int tam, int pos )
{


	if( pos < tam )
	{
		if( numeros[pos] <= numeros[pos+1] )
			return 1;
		else
		{
			return -1;
		};

	}
	else
		return 0;

}


main()
{

	int *numeros = NULL;
	int tam, i;


	scanf( "%d", &tam );

	numeros = malloc(sizeof(int)*tam);

	for( i=0; i < tam; i++ )
	{
			scanf( "%d", &numeros[i] );
	};

};
