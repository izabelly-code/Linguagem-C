#include <stdio.h>
int main() {
unsigned int placa;
printf("Digite a placa:");
scanf("%4d",&placa);
printf("%i é o estado.\n%d é o município.\n%i é o número do veículo.\n",placa/1000,(placa%1000-placa%100)/100,placa%100);
return 0;
}