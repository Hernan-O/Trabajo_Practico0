#include <stdio.h>
#include <stdlib.h>

/* Punto 1, Monto invertido

int main () {
   float ingreso;
   printf("Ingrese el monto \n");
   scanf ("%f", &ingreso);
   printf("El retorno de un inversion a1 mes es de %f \n", (ingreso * 1.02));
   printf("toque cualquier boton para salir!");
   scanf ("%d");

return 0;
}
*/

/* Punto 2, Descuento

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
/* Punto 3, Hombres y mujeres

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
*/
/*Punto 4, Promedio de aprobacion

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
*/

