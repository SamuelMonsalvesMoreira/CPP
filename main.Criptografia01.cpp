#include <iostream>
#include <string.h>
#define MAX 10

using namespace std;


int main()
{
    int i;
    int tamanho;
    char nome[10];
    strcpy(nome,"Fernando");
    tamanho=strlen(nome);
    for(i=0;i<tamanho;i++)
        nome[i]=nome[i]+3;
    printf("\nDado criptografado: %s\n",nome);
    for(i=0;i<tamanho;i++)
        nome[i]=nome[i]-3;
    printf("\nDado descriptografado: %s\n",nome);



    return 0;
}
