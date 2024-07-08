#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int solicitarEntrada(const char* mensaje, int min, int max)
{
    int valor;
    do
    {
        printf("%s", mensaje);
        scanf("%i", &valor);
        if (valor < min || valor > max)
        {
            printf("Error, ingrese un valor válido (%i - %i)\n", min, max);
        }
    } while (valor < min || valor > max);
    return valor;
}

int obtenerDia(int mes, int anio)
{
    int max_dia;
    switch (mes)
    {
    case 2:
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        {
            max_dia = 29;
        }
        else
        {
            max_dia = 28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        max_dia = 30;
        break;
    default:
        max_dia = 31;
        break;
    }
    return solicitarEntrada("Ingrese su día de nacimiento:\n", 1, max_dia);
}

int calcularLuckyNumber(int anio, int mes, int dia)
{
    int sum1 = anio + mes + dia;
    int sum2 = (sum1 / 1000) + (sum1 % 1000 / 100) + (sum1 % 100 / 10) + (sum1 % 10);
    return (sum2 / 10) + (sum2 % 10);
}

int esBisiesto(int anio)
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main()
{
    setlocale(LC_ALL, "");
    int opcion, anio, mes, dia, luckyNumber;
    int continuar = 1;

    while (continuar)
    {
        opcion = solicitarEntrada("Seleccione 1 si su año NO es bisiesto, seleccione 2 si su año SI es bisiesto:\n", 1, 2);
        anio = solicitarEntrada("Ingrese su año de nacimiento:\n", 0, 2500);

        if ((opcion == 1 && esBisiesto(anio)) || (opcion == 2 && !esBisiesto(anio)))
        {
            printf("Error, el año introducido no coincide con la selección, vuelva a ingresar\n");
            continue;
        }

        mes = solicitarEntrada("Ingrese su mes de nacimiento: (1 - 12)\n", 1, 12);
        dia = obtenerDia(mes, anio);
        luckyNumber = calcularLuckyNumber(anio, mes, dia);

        printf("Su lucky number es: %i\n", luckyNumber);
        continuar = solicitarEntrada("Presione 1 para continuar con el algoritmo o presione 0 para finalizar el algoritmo:\n", 0, 1);
    }

    getch();
    return 0;
}