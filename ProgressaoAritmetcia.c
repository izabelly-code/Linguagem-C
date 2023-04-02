#include <stdio.h>
#include <string.h>
int main(){
float numeroinicial;
printf("valor inicial:");
scanf("%f", &numeroinicial);
float razao;
printf("valor da razão da P.A.:");
scanf("%f", &razao);
int termo;
printf("índice do termo:");
scanf("%d", &termo);
printf("\n");
float n=razao*termo;
float p=numeroinicial+n;
printf("%.2f\n",p);
return 0;
}