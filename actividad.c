#include <stdio.h>

#define TC_DOLAR_GTQ 7.75  // tipo de cambio: 1 USD = 7.75 GTQ
#define TC_Euro_GTQ 8.51 // tipo de cambio: 1 EUR = 8.51 GTQ
#define TC_Euro_Dolar 1.09 // tipo de cambio 1 EUR = 1.09 USD
int main() {
int opcion;
float cantidad;

printf("Bienvendo al conversor de monedas\n");
printf("1. Convertir de Dolares a Quetzales\n");
printf("2. Convertir de Quetzales a Dolares\n");
printf("3. Convertir de Euros a Dolares\n");
printf("4. Convertir de Euros a Quetzales\n");
printf("5. Convertir de Dolares a Euros\n");
printf("6. Convertir de Quetzales a Euros\n");
scanf("%d", &opcion);

switch(opcion) {
    case 1:
        printf("Ingrese la cantidad en Dolares: ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
        break;
    case 2:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        Printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
        break;
    case 3:
        printf("Ingrese la cantidad en Euros: ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %2.f USD\n", cantidad, cantidad * TC_Euro_Dolar);
        break;
    case 4:
        printf("Ingrese la cantidad en Euros: ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %2.f GTQ\n", cantidad, cantidad * TC_Euro_GTQ);
        break;
    case 5:
        printf("Ingrese la cantidad en Dolares: ");
        scanf("%f", &cantidad);
        printf("%2f USD equivale a %2.f EUR\n"), cantidad, cantidad / TC_Euro_Dolar;
        break; 
    case 6:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %2.f EUR\n"), cantidad, cantidad / TC_Euro_GTQ;
    default:
        printf("opcion no validad\n");
    }
return 0;
}

   