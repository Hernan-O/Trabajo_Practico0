#include <stdio.h>
#include <stdlib.h>

//*************************Trabajo practico Guia inicial, Navarra Hernán*********************
//************************* Punto 1, Monto invertido********************

int main()
{
   int op;
   printf("Ingrese un ejercicio para mostrar su funcionamiento \n");
   printf("Ejercicio:  \n");
   scanf("%i", &op);
   switch(op)
        {

        case 1: ;
                float ingreso;
                printf("Ingrese el monto \n");
                scanf ("%f", &ingreso);

                printf("El retorno de un inversion a1 mes es de %f \n", (ingreso * 1.02));
                printf("toque cualquier boton para salir!");scanf ("%d");
        break;


//*************************** Punto 2, Descuento****************************

    case 2: ;

            float ingreso2;

            printf("Ingrese el monto para saber su descuento \n");
            scanf ("%f", &ingreso2);

            printf("El Precio final con descuento es: %f \n", (ingreso2 * 0.85));
            printf("toque cualquier boton para salir!");
            scanf ("%d");

            return 0;

        break;

//************************************Punto 3, Hombres y mujeres*************************

        case 3: ;
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
            break;


//*******************Punto 4, Promedio de aprobacion*********************

        case 4: ;
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
            break;


//*************************** PUNTO 6 Descuento 5000$**********************


        case 5: ;
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
            break;


//*********************** PUNTO 7 Salario semanal ***********************


        case 6: ;
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
        break;


//******************************PUNTO 8 Numeros forma ascendente***********************

        case 7: ;
        int eleccion=0, contador=0, eleccion2=0;

        printf("el programa contara del numero mas peque�o al mas alto!\n");
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

//********************************Punto 9 CAMISAS*******************

        case 8: ;

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
        break;

//************************PUNTO 9 Algoritmo suma/resta/multi**********************


         case 9:    ;
            float numeroo1 = 0,numeroo2 = 0;

            printf("Este algoritmo necesita que introduzca 2 numeros \n si los numeros son iguales los multiplicara entre si \n si el primero es mayor que el segundo los restara \n si el segundo es mayor que el primero los sumara \n Ingrese el primer numero!\n");
            scanf("%f" ,&numeroo1);
            printf("ingrese el segundo numero \n");
            scanf("%f" ,&numeroo2);

            if (numeroo1<numeroo2)
                {
                printf("el numero obtenido es: %f" , numeroo1+numeroo2);
                }

            else if(numeroo1>numeroo2)
                {
                printf("el numero obtenido es: %f" , numeroo1-numeroo2);
                }

            else
                {
                printf("el numero obtenido es: %f" , numeroo1*numeroo2);
                }

        return 0;
        break;

//*********************PUNTO 10 3 numeros, imprimir el mayor******************


        case 10: ;
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
            break;

//***********************PUNTO 11 Promedio 7 notas*********************


        case 11:  ;
            float Nota1,Nota2,Promedio1;

            printf("Con este programa sabras tu promedio\n");
            printf("ingrese sus 7 notas\n");

            for (int contador=1 ; contador<=7; contador++)
                {
                    scanf("%f" ,&Nota2);
                    if (Nota2>10)
                    {
                        printf("Nota maxima 10");
                        return 0;
                    }
                    else
                    Nota1= Nota1+Nota2;

                }
            printf("su promedio es: %f", Nota1/7);

        return 0;
        break;

//***********************PUNTO 12 10 numeros y sus cubos/cuartas ****************************


        case 12:  ;
                float num1,num3,num4;
                int num2;

                printf("este algoritmo muestra el cubo y la cuarta de el numero que elijas");

            for(int num2=1 ; num2<=10 ; num2++)
                {
                printf("\n elija un numero\n");
                scanf("%f", &num1);

                num3=num1 * num1 * num1;

                num4=num3 * num1;

                printf("su cubo es: %f\n", num3);
                printf("su cuarta es: %f\n", num4);

                }

            return 0;
            break;
//********************************PUNTO 13 Imprimir solo los positivos********************

        case 13:    ;
            float num,Num2;

                printf("Ingrese 10 numeros, solo se imprimiran los positivos\n");
                for(Num2=0;Num2<=10;Num2++)

                    {
                    printf("Ingrese el numero: ");
                    scanf("%f", &num);

                        if (num>=-1){
                            printf("%f\n", num);

                        }

                        else
                            num=0;
                    }
            return 0;
            break;

//********************************PUNTO 14 NEGATIVO A POSITIVO!*************************

        case 14:    ;
                float pos,quince;
                printf("convierta sus numeros de negativo a positivo!\n");
            for (quince=1;quince<=15;quince++)
                {
                printf("Ingrese el numero negativo\n");
                scanf("%f" ,&pos);
                printf("El numero pasado a positivo es: %f\n", fabs(pos));
                }


        return 0;
        break;


//*******************************PUNTO 15 Calificaciones 40 alumnos*************************/

        case 15:    ;
                float alu,nota,prom = 0,baj = 10;
                printf("Luego de ingresar la nota de 40 alumnos esto le dira el promedio del grupo y la nota mas baja\n\n");

                    for(alu=1;alu<=40;alu++)
                {
                    printf("ingrese la nota: ");
                    scanf("%f", &nota);

                        if(nota>10)
                        {
                            printf("nota maxima 10.\n");
                                return 0;
                                }

                        else if (nota<baj)
                        {
                            baj=nota;prom=prom+nota;
                            }

                        else prom= prom + nota;

                }
                printf("El promedio de los alumnos es: %f\n\n" , prom/40);
                printf("La nota mas baja es %f", baj);

            return 0;
            break;

//*******************************PUNTO 16 TABLA DEL NUMERO!****************************


        default:    ;
            int a,b,c;

            printf("inserte un numero y le mostraremos la tabla de multiplicar del mismo \n");
            scanf("%d",&a);

            for(b=1;b<=10;b++)
            {
            c=a*b;
            printf("%d x %d = %d \n",a,b,c);
            }
        return 0;
        break;
        }
}

