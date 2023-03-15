#include <stdio.h>

int main()
{
#define TAM_MAX 10
int i;
int vet1[TAM_MAX];
int Maior;



for ( i=0; i<TAM_MAX; i++)
scanf("%d", &vet1[i]); // le os dados

Maior = vet1[0]; // assume que o primeiro é o maior
for(i=0; i<TAM_MAX; i++)
if (vet1[i] > Maior)
Maior = vet1[i];
printf("O maior elemento é %d\n", Maior);

    return 0;
}
