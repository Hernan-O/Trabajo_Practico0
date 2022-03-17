#include <stdio.h>
#include <stdlib.h>

/* ************************* Punto 1, Monto invertido********************

int main () {
   float ingreso;
   printf("Ingrese el monto \n");
   scanf ("%f", &ingreso);
   printf("El retorno de un inversion a1 mes es de %f \n", (ingreso * 1.02));
   printf("toque cualquier boton para salir!");
   scanf ("%d");

return 0;
}


/*************** Punto 2, Descuento****************************

int main () {
   float ingreso;

   printf("Ingrese el monto para saber su descuento \n");
   scanf ("%f", &ingreso);

   printf("El Precio final con descuento es: %f \n", (ingreso * 0.85));
   printf("toque cualquier boton para salir!");
   scanf ("%d");

return 0;
}
*/
/* Punto 3, Hombres y mujeres*************************

int main()
{
    float alumnos, hombres, mujeres;

    printf("Ingrese la cantidad de alumnos ");
    scanf("%f", &alumnos);

    printf("cuantos de ellos son hombres? ");
    scanf("%f", &hombres);

    printf("cuantos de ellos son mujeres? ");
    scanf("%f", &mujeres);

    hombres= hombres / alumnos;
    mujeres= mujeres / alumnos;

    printf("el porcentaje de alumnos mujeres es %f%% \n",  (mujeres*100));

    printf("el porcentaje de alumnos hombres es %f%% \n",  (hombres*100));

    return 0;

}

*******************Punto 4, Promedio de aprobacion*********************

int main()
 {
    float nota1, nota2, nota3, promedio;

    printf("ingrese su nota ");
    scanf("%f" ,&nota1);
    if (nota1>10)
    {
        printf("la nota maxima es 10");
        return 0;
    }
    else
    printf("ingrese su segunda nota ");
    scanf("%f" ,&nota2);

     if (nota2>10)
    {
        printf("la nota maxima es 10");
        return 0;
    }
    else


    printf("ingrese su tercer nota ");
    scanf("%f" ,&nota3);

     if (nota3>10)
    {
        printf("la nota maxima es 10");
        return 0;
    }
    else

    promedio = nota1 + nota2 + nota3;

    printf("su promedio es: %f \n" , (promedio/3));

    if (promedio<21)
    {
        printf("Usted ha desaprobado!!!!!!");
    }
    else
        printf("Usted ha aprobado!!!!!");

    return 0;

}

*************************** PUNTO 6 Descuento 5000$**********************


int main()
{
    float precio,descuento,total;

    printf("Bienvenido, ingrese el total de la compra que ha realizado\n");
    printf("Si su compra supera los $5000 se le hara un 20%% de descuento\n");
    scanf("%f", &precio);

    if(precio>=5000)
    {
        total = precio * 0.8;
        printf("Su compra con descuento es: $%f \n", total);


        return 0;
    }
    else
        printf("su compra no posee un descuento, debera pagar $%f \n", precio);

    return 0;
}

*********************** PUNTO 7 Salario semanal ***********************


int main()
{
    float salario, hora, trabajo;
    hora = 300;

    printf("cuantas horas trabaja usted? \n");
    scanf ("%f", &trabajo);

    if (trabajo>40)
    {
      salario = hora*40 + ((trabajo-40) * 400);
      printf("esta cobrando %f" , salario);


      return 0;
    }
    else
        salario = hora * trabajo;
        printf("usted esta cobrando %f \n" , salario);


    return 0;


}
 ******************************PUNTO 8 Numeros forma ascendente***********************
int main()
{
 int eleccion=0, contador=0, eleccion2=0;

  printf("el programa contara del numero mas pequeño al mas alto!\n");
  printf("elija un numero ");
  scanf("%d", &eleccion);
  printf("elija otro numero ");
  scanf("%d", &eleccion2);
    if (eleccion<eleccion2)
        while (eleccion<=eleccion2)
        {
            printf("%d \n", eleccion);
            eleccion++ ;

        }
    else
        while(eleccion2<=eleccion)
        {

            printf("%d \n", eleccion2);
            eleccion2++ ;
        }


 return 0;
}


int main()
{
    float camisa;

    printf("Bienvenido, introduzca la cantidad de camisas para saber su descuento \n");
    printf("si usted lleva mas de 3 camisas recibira un 20%% de descuento, sino solo sera del 10%%  :( \n");
    scanf("%f" ,&camisa);

    if (camisa>=3)
    {
        printf("su descuento sera del 20%% :)");
    }
    else
    {
        printf("su descuento solo sera del 10%% :(");
    }

return 0;
}

************************PUNTO 9 Algoritmo suma/resta/multi**********************

int main()
{
    float numero1 = 0,numero2 = 0,;

    printf("Este algoritmo necesita que introduzca 2 numeros \n si los numeros son iguales los multiplicara entre si \n si el primero es mayor que el segundo los restara \n si el segundo es mayor que el primero los sumara \n Ingrese el primer numero!\n");
    scanf("%f" ,&numero1);
    printf("ingrese el segundo numero \n");
    scanf("%f" ,&numero2);

    if (numero1<numero2)
        {
        printf("el numero obtenido es: %f" , numero1+numero2);
        }

    else if(numero1>numero2)
        {
        printf("el numero obtenido es: %f" , numero1-numero2);
        }

    else
        {
        printf("el numero obtenido es: %f" , numero1*numero2);
        }

return 0;
}

*********************PUNTO 10 3 numeros, imprimir el mayor******************


int main()
    {
     int numero1,numero2,numero3;
     printf("Ingresara 3 numeros y le mostrare el mas grande \ningrese el primer numero \n");
     scanf("%d", &numero1);
     printf("ingrese el segundo numero \n");
     scanf("%d", &numero2);
     printf("ingrese el tercer numero \n");
     scanf("%d", &numero3);

     if(numero1>numero2 && numero1>numero3)
     {
         printf("el numero mas grande es el primero");
     }
     else if (numero2>numero1 && numero2>numero3)
     {
        printf("el numero mas grande es el segundo");
     }
     else
        {
        printf("el numero mas grande es el tercero");
    }
    return 0;
    }

***********************PUNTO 11 Promedio 7 notas*********************/

int main()
    {
    float nota1,nota2,promedio;

    printf("Con este programa sabras tu promedio\n");
    printf("ingrese sus 7 notas\n");

    for (int contador=1 ; contador<=7; contador++)
        {
            scanf("%f" ,&nota2);
            if (nota2>10)
            {
                printf("Nota maxima 10");
                return 0;
            }
            else
            nota1= nota1+nota2;

        }
    printf("su promedio es: %f", nota1/7);
    }

//***********************PUNTO 12 10 numeros y sus cubos/cuartas ****************************
