#include <stdio.h>

int main()
{
    char nome[100];
    printf("Digite o nome: ");
    scanf("%s",nome);
    
    printf("Olá, %s!\n",nome);
    return 0;
}