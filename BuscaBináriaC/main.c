#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	int t;
	int p;
	int lista[10];
	int encontrado;
	int inicio;
	int fim;
	int meio;
	char continua='s';
	
	for(i=0;i<10;i++)
	{
		printf("Digite o numero: ");
		scanf("%d", &lista[i]);
	}
	
	printf("\n\n______________________________\n\n");
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(lista[i]>lista[j])
			{
				t=lista[i];
				lista[i]=lista[j];
				lista[j]=t;
			}
		}
	}
		
	while(continua=='s')
	{
		printf("Digite um numero para localizar: ");
		scanf("%d", &p);
		
		encontrado=0;
		inicio=0;
		fim=9;
		
		while(encontrado==0&&inicio<=fim)
		{
			meio=(inicio+fim)/2;
			
			if(lista[meio]==p)
			{
				printf("\nEncontrado na posicao %d\n", meio);
				encontrado=1;
			}
			else
			{
				if(lista[meio]>p)
				{
					fim=meio-1;
				}
				else
				{
					inicio=meio+1;
				}
			}
		}
		
		if(encontrado==0)
		{
			printf("Nao encontrado\n");
		}
		
		printf("\nDeseja continuar? s/n\n");
		scanf("%s", &continua);
		printf("\n______________________________\n\n");
	
	}
	
	
	return 0;
}
