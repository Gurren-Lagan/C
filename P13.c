#include <stdio.h>

int lectura(int v[]){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	return n;
}
void imprimir(int v[], int n){
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",v[i]);
	}
}

int main()
{
	int n, v[10];
	n=lectura(v);
	imprimir(v, n);
	return 0;
}
