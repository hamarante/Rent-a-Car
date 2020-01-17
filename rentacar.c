#include <stdio.h>

int main(){

/* Variáveis */

int diasal;
char categoria;
float totaltarifa, kmilimitadas, diaria, km, seguro;
int tarifa;


/* Inputs e Outputs */

printf("Quantos dias pretende alugar o veículo? \n");
scanf("%d", &diasal);
printf("Categoria? \n");
printf("\n\n\n");
printf("Categoria A \n");
printf("Categoria B \n");
printf("Categoria C \n");
printf("Categoria D \n");
scanf(" %c", &categoria);


/* Categoria */

switch (categoria)
{
case 'a':
case 'A':
    printf("Qual tarifa deseja? \n");
    printf("\n\n\n");    
    printf("1: Kms-Ilimitada \n");
    printf("2: Diária + Km \n");
    scanf("%d", &tarifa);
    kmilimitadas = 27.50;
    diaria = 14.00;
    km = 0.17;
    break;
case 'b':
case 'B':
    printf("Qual tarifa deseja? \n");
    printf("\n\n\n");
    printf("1: Kms-Ilimitada \n");
    printf("2: Diária + Km \n");
    scanf("%d", &tarifa); 
    kmilimitadas = 32.50;
    diaria = 17.00;
    km = 0.20;
    break;
case 'c':
case 'C':
    printf("Qual tarifa deseja? \n");
    printf("\n\n\n");
    printf("1: Kms-Ilimitada \n");
    printf("2: Diária + Km \n");
    scanf("%d", &tarifa);
    kmilimitadas = 37.50;
    diaria = 20.00;
    km = 0.25; 
    break;
case 'd':
case 'D':
    printf("Qual tarifa deseja? \n");
    printf("\n\n\n");
    printf("1: Kms-Ilimitada \n");
    printf("2: Diária + Km \n");
    scanf("%d", &tarifa); 
    kmilimitadas = 40.00;
    diaria = 22.00;
    km = 0.30;
    break;           
default:
    printf("Categoria inexistente \n");
    break;
}

switch (tarifa)
{
case 1:
    totaltarifa = kmilimitadas * diasal;
    printf("O total de aluguel é de %0.2f € \n", totaltarifa);    
    break;
case 2:
    totaltarifa = (diaria * diasal) + (km * 100); 
    printf("O total de aluguel é de %0.2f € \n", totaltarifa);
    break;    
default:
    printf("Tarifa inexistente \n");
    break;
}
}