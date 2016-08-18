#include<stdio.h>
 
int maiorDiferenca (int v[], int n)
{    
    int diferenca = v[1]-v[0];
    int somaAtual = diferenca;
    int somaMaxima = somaAtual;
 	int i=0;
 	
    for(i=1; i<n-1; i++)
    {
        // Calcula a  diferenca atual
        diferenca = v[i+1]-v[i];
 
        // Calcula a soma atual
        if (somaAtual > 0)
           somaAtual += diferenca;
        else
           somaAtual = diferenca;
 
        // Atua a soma se necessario
        if (somaAtual > somaMaxima)
           somaMaxima = somaAtual;
    }
 
    return somaMaxima;
}
 

int main()
{
    int vetor[] = {1000, 2, 6, 8000, 100};
    int tamanho= sizeof(vetor)/sizeof(vetor[0]);
    printf("Diferenca Maxima:%d\n",  maiorDiferenca(vetor, tamanho));
    return 0;
}
