#include<stdio.h>
main(){

    //declaracao de variaveis de texto 
    //chamadas em c de vetores de caracteres 
    char nome[20]= "moises marcellino";
    char endereco[50];
    char matricula [12];

    printf( "\n numero: %s" , nome);

    //declarando os dados com scanf
    printf(" \n digite o endereco");
    scanf ("\n]" ,endereco);
    printf("o endereco e: %s ",endereco);
   

    //recebendo dados com fgets
    printf("\n Digite a matricula");
    fgets (matricula,12,stdin);
    printf("\nA digite a matricula e: %s", matricula);



}