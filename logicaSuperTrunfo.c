#include <stdio.h>

int main (){

int populacao1, populacao2, turismo1, turismo2;
char carta1, carta2, estado1, estado2, cidade1, cidade2;
float area1, area2, pib1, pib2;

printf("BEM VINDO AO LOGICA SUPERTRUNFO!! \n");

printf("Digite a carta1:\n");
scanf ("%s", &carta1);
printf("Digite a carta2: \n");
scanf ("%s", &carta2);


printf("Digite a cidade1:\n");
scanf ("%s", &cidade1);
printf("Digite a cidade2 : \n");
scanf ("%s", &cidade2);

printf("Digite a estado1:\n");
scanf ("%s", &estado1);
printf("Digite a estado2: \n");
scanf ("%s", &estado2);

printf("Digite a populacao1:\n");
scanf ("%d", &populacao1);
printf("Digite a populacao2: \n");
scanf ("%d", &populacao2);
if (populacao1>populacao2){
printf ("POPULACAO 1 VENCEU!! \n");
}else{
    printf("POPULACAO 2 VENCEU!! \n");
}

printf("Digite turismo1: \n");
scanf("%d", &turismo1);
printf("Digite turismo2: \n");
scanf("%d", &turismo2);
if ("turismo1>turismo2"){
printf("TURISMO 1 VENCEU!! \n");
}else{
   printf ("TURISMO 2 VENCEU!! \n");
}

printf("Digite a area1:\n");
scanf ("%f", &area1);
printf("Digite a area2 : \n");
scanf ("%f", &area2);
if (area1>area2){
printf ("AREA 1 VENCEU!! \n");
}else{
    printf("AREA 2 VENCEU!! \n");
}

printf("Digite o pib1:\n");
scanf ("%f", &pib1);!
printf("Digite o pib2 : \n");
scanf ("%f", &pib2);
if (pib1>pib2){
printf ("PIB 1 É VENCEU!! \n");
}else{
    printf("PIB 2 VENCEU!! \n");
}





    return 0;
}