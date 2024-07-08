/*Numero de la Suerte 
Se desea conocer el lucky number (número de la suerte) de cualquier persona. 
El númerode la suerte se consigue reduciendo la fecha de nacimiento a un número de un solo dígito.
Ejemplo, la fecha de nacimiento de Emma es la siguiente: 16-08-1973 > 16+8+1973 = 1997 > 14+9+9+7=26 > 2+6 =8.
El número de la suerte de Emma será el 8. El  programa  deber  repetirse  hasta  cuando  el usuario  desee. 
Además, debe  validar que  la fecha ingresada sea válida*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL,"");
    int bisiesto, anio, mes, dia, sum1, sum2, sum3;
    int bot, i;
    int pna, sna, tca, cna;
    int pnl, snl;
    for (i = 0; i < 1; i)
    {
        do
        {
            printf("Seleccione 1 si su año NO es bisiesto, seleccione 2 si su año SI es bisiesto:\n");
            scanf("%i",&bisiesto);
            if ((bisiesto<1) || (bisiesto>2))
            {
                printf("Error, ingrese 1 o 2\n");
            }
        } while ((bisiesto<1) || (bisiesto>2));

        if (bisiesto==1)
        {
            do
            {
                printf("Ingrese su año de nacimiento:\n");
                scanf("%i",&anio);
                if ((anio>2024)||(anio<0))
                {
                    printf("Error, ingrese un año válido\n");
                }
            } while ((anio>2024)||(anio<0));
            do
            {
                printf("Ingrese su mes de nacimiento: (1 - 12)\n");
                scanf("%i",&mes);
                if ((mes>12)||(mes<1))
                {
                    printf("Error, ingrese un mes válido\n");
                }
            } while ((mes>12)||(mes<1));
            switch (mes)
            {
            case 1:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Enero\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 2:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>28))
                    {
                        printf("Introduzca un día válido para Febrero\n");
                    }
                } while ((dia<1)||(dia>28));
                break;
            case 3:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Marzo\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 4:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Abril\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 5:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Mayo\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 6:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Junio\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 7:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Julio\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 8:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Agosto\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 9:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Septiembre\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 10:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Octubre\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 11:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Noviembre\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 12:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Diciembre\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            default:
                printf("Error crítico");
                break;
            }
            sum1=anio+mes+dia;
            pna=trunc(sum1/1000);
            sna=trunc((sum1-(pna*1000))/100);
            tca=trunc((sum1-((pna*1000)+(sna*100)))/10);
            cna=sum1-((pna*1000)+(sna*100)+(tca*10));
            sum2=pna+sna+tca+cna;
            pnl=trunc(sum2/10);
            snl=sum2-(pnl*10);
            sum3=pnl+snl;
            printf("Su lucky number es: %i\n",sum3);
        }  
        else if (bisiesto==2)
        {
            do
            {
                printf("Ingrese su año de nacimiento:\n");
                scanf("%i",&anio);
                if ((anio>2024)||(anio<0))
                {
                    printf("Error, ingrese un año válido\n");
                }
                if ((anio<=2024)&&(anio>0))
                {
                    if ((anio%4!=0)||((anio%100==0)&&(anio%400!=0)))
                    {
                        printf("Error, el año introducido no es bisiesto, vuelva a ingresar\n");
                    }
                }
            } while (((anio>2024)||(anio<0))||((anio%4!=0)||((anio%100==0)&&(anio%400!=0))));
            do
            {
                printf("Ingrese su mes de nacimiento: (1 - 12)\n");
                scanf("%i",&mes);
                if ((mes>12)||(mes<1))
                {
                    printf("Error, ingrese un mes válido\n");
                }
            } while ((mes>12)||(mes<1));
            switch (mes)
            {
            case 1:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Enero\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 2:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>29))
                    {
                        printf("Introduzca un día válido para Febrero\n");
                    }
                } while ((dia<1)||(dia>29));
                break;
            case 3:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Marzo\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 4:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Abril\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 5:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Mayo\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 6:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Junio\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 7:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Julio\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 8:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Agosto\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 9:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Septiembre\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 10:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Octubre\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            case 11:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>30))
                    {
                        printf("Introduzca un día válido para Noviembre\n");
                    }
                } while ((dia<1)||(dia>30));
                break;
            case 12:
                do
                {
                    printf("Ingrese su día de nacimiento:\n");
                    scanf("%i",&dia);
                    if ((dia<1)||(dia>31))
                    {
                        printf("Introduzca un día válido para Diciembre\n");
                    }
                } while ((dia<1)||(dia>31));
                break;
            default:
                printf("Error crítico");
                break;
            }
            sum1=anio+mes+dia;
            pna=trunc(sum1/1000);
            sna=trunc((sum1-(pna*1000))/100);
            tca=trunc((sum1-((pna*1000)+(sna*100)))/10);
            cna=sum1-((pna*1000)+(sna*100)+(tca*10));
            sum2=pna+sna+tca+cna;
            pnl=trunc(sum2/10);
            snl=sum2-(pnl*10);
            sum3=pnl+snl;
            printf("Su lucky number es: %i\n",sum3);
        }
        do
        {
            printf("Presione 1 para continuar con el algoritmo o presione 0 para finalizar el algoritmo:\n");
            scanf("%i",&bot);
            if ((bot<0)||(bot>1))
            {
                printf("Error, presione 0 o 1\n");
            }
        } while ((bot<0)||(bot>1));
        if (bot==0)
        {
            i++;
        }
    }
    getch();    
    return 0;
}