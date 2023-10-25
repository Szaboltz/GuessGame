#include <stdio.h>
#include <stdlib.h> //necessário para a função rand() e srand()
#include <time.h> //necessário para a função time()
int num_pseudo()
	{
	srand(time(NULL));
	return (rand() % 1000);
	}


void q1() {
	int num, seg, n=1;    
	
	seg = num_pseudo();
	
	printf ("Digite um numero qualquer...\n");	
	while(1)
		{
		printf("%d) ", n);
		scanf("%d", &num);
		if (num == seg) 
			{
			printf ("Voce acertou com %d tentativas!", n);
			break;
			}
		else if (num < seg) 
			printf ("Tente outro mais ALTO.\n");
		else 
			printf ("Tente outro mais BAIXO.\n");
		n++;
		}
}


int main() {
	q1();
	return 0;
}
