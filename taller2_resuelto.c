#include <stdio.h>
#include <math.h>
int terminar(void);

float FunVolumen(){
    float pi = 3.141592;
    float radio = 14.5;
    float altura = 26.79;

    float volumen = (pi*(radio*radio)*altura)/3;

    printf("El Volumen del cono es igual a %lf.\n",volumen);

    return 0;
}

float Celsius(){
    double fahrenheit;

    printf("Escriba sus grados Fahrenheir:\n ");
    scanf("%lf",&fahrenheit);

    float celsius = (fahrenheit-32)*5/9;

    printf("Los %f grados Fahrenheit es igual a %lf grados Celsius.\n",fahrenheit,celsius);

    return 0;

}

float Conversion(){
    float segundos;

    printf("Escriba sus segundos:\n");
    scanf("%f",&segundos);

    float minutos = segundos/60;
    float horas = minutos/60;

    printf("Tus %f segundos es igual a %f minutos y a %f horas.\n",segundos,minutos,horas);

    return 0;
}

double Promedio(){
    double nota1;
    double nota2;
    double nota3;
    double nota4;

    printf("Ingrese la calificación de su primera practica:\n");
    scanf("%lf",&nota1);
    printf("Ingrese la calificacion de su segunda practica:\n");
    scanf("%lf",&nota2);
    printf("Ingrese la calificación de su primera actividad:\n");
    scanf("%lf",&nota3);
    printf("Ingrese la calificación de su segunda actividad:\n");
    scanf("%lf",&nota4);

    double promedio = (nota1+nota2+nota3+nota4)/4;

    printf("En la convocatoria de junio el estudiante tuvo un promedio de %f.\n",promedio);

    return 0;

}

double Ecuacion(){
    double r;
    double a;
    double b;
    double c;
    double d;

    printf("Ingrese el valor de r:\n");
    scanf("%lf",&r);
    printf("Ingrese el valor de a:\n");
    scanf("%lf",&a);
    printf("Ingrese el valor de b:\n");
    scanf("%lf",&b);
    printf("Ingrese el valor de c:\n");
    scanf("%lf",&c);
    printf("Ingrese el valor de d:\n");
    scanf("%lf",&d);

    float ecuacion = (4/(r+34))-(9*(a+(b*c)))+((3+d*(2+a))/(a+(b*d)));

    printf("El resultado es igual a %f.\n",ecuacion);

    return 0;
}

double Funcion(){
    int x = 12;
    double sigma = 2.1836;
    int y = 3;
    double lambda = 1.11695;
    double alfa = 328.67;
    double f = 3*((x+sigma*y)/((x*x)-(y*y)))-lambda*(alfa - 13.7);

    printf("El resultado de la ecuacion es igual a %lf.\n",f);

    return 0;
    
}

double Salario(){
    double Sueldobase;
    double CompleDestino;
    double CargoAcademico;
    int HorasExtra;
    int hijos;
    int mayores;

    printf("¿Cual es su sueldo base?.\n");
    scanf("%lf",&Sueldobase);
    printf("¿Cual es su complemento de destino?.\n");
    scanf("%lf",&CompleDestino);
    printf("¿Cual es su complemento de cargo academico?.\n");
    scanf("%lf",&CargoAcademico);
    printf("¿Cuantas horas extras realizo?.\n");
    scanf("%d",&HorasExtra);
    printf("¿Cuantos hijos tienes?.\n");
    scanf("%d",&hijos);
    printf("¿Cuantos mayores viven contigo?.\n");
    scanf("%d",&mayores);

    double GanaciaHoraEx = HorasExtra*23;
    double SueldoBruto = Sueldobase+CompleDestino+CargoAcademico+GanaciaHoraEx;
    double IPRF = 24-(hijos*2)-mayores;
    double RetencionIPRF = SueldoBruto*(IPRF/100);
    double Sueldoneto = SueldoBruto-RetencionIPRF;

    printf("Sueldo base:%f\n",Sueldobase);
    printf("Complemento de destino:%f\n",CompleDestino);
    printf("Complemento de cargo academico:%f\n",CargoAcademico);
    printf("Horas extras realizadas:%d\n",HorasExtra);
    printf("Hijos:%d\n",hijos);
    printf("Mayores:%d\n",mayores);
    printf("Calculo de la nomina.\n");
    printf("Sueldo bruto:%f\n",SueldoBruto);
    printf("Porcentaje de IPRF:%f\n",IPRF);
    printf("Retencion de IPRF:%f\n",RetencionIPRF);
    printf("Sueldo neto:%f\n",Sueldoneto);

    return 0;

}

double Resultados(){
    int a = 1;
    double d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    printf("El valor de la primera expresion es igual a %d.\n",a);

    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("El valor de la segunda expresion es igual a %d.\n",a);
    
    a = 45 + 45 * 50 % a--;
    printf("El valor de la tercera expresion es igual a %d.\n",a);

    d = 1.5 * 3 + (++d);
    printf("El valor de la cuarta expresion es igual a %f.\n",d);

    d = 1.5 * 3 + d++;
    printf("El valor de la quinta expresion es igual a %f.\n",d);

    a %= 3 / a + 3;
    printf("El valor de la sexta expresion es igual a %d.\n",a);

    return 0;
}

double AreaTriangulo(){
    double lado1;
    double lado2;
    double angulo;

    printf("Escribe el valor de tu primer lado:\n");
    scanf("%lf",&lado1);
    printf("Escribe el valor de tu segundo lado:\n");
    scanf("%lf",&lado2);
    printf("Escribe el valor de tu angulo:\n");
    scanf("%lf",&angulo);

    double area = 0.5*lado1*lado2*sin(angulo);

    printf("El area del triangulo es igual a %f.\n",area);

    return 0;
}

double AreaTrianguloRadianes(){
    double lado1;
    double lado2;
    double angulo;

    printf("Escribe el valor de tu primer lado:\n");
    scanf("%lf",&lado1);
    printf("Escribe el valor de tu segundo lado:\n");
    scanf("%lf",&lado2);
    printf("Escribe el valor de tu angulo:\n");
    scanf("%lf",&angulo);

    double Radianes = angulo/180;

    double area = 0.5*lado1*lado2*sin(Radianes);

    printf("El area del triangulo es igual a %f.\n",area);

    return 0;
}

double Prestamo(){
    double CapitalPrestado;
    double InteresAnual;
    double años;

    printf("Ingrese el valor de la capital prestada:\n");
    scanf("%lf",&CapitalPrestado);
    printf("Ingrese el valor del interes anual:\n");
    scanf("%lf",&InteresAnual);
    printf("Ingrese la cantidad de años que dura el prestamo:\n");
    scanf("%lf",&años);

    double Cuota = (CapitalPrestado*InteresAnual)/(100*(1-pow((1+InteresAnual/100),-años)));
    double TotalPago = Cuota*años;
    double Amortizacion = TotalPago-CapitalPrestado;

    printf("La cuota a pagar es de %f.\n",Cuota);
    printf("El valor total pagado es igual a %f.\n",TotalPago);
    printf("Con una amortizacion de %f.\n",Amortizacion);

    return 0;
}

int terminar(){
    int salir = 0;
    int end = 1;
    printf("¿Desea volver a intentarlo?.\n");
    printf("[1]Si.\n");
    printf("[2]No.\n");

    scanf("%d",&salir);
    if (salir == 1) {
        end=1;
    } else if (salir == 2) {
        end = 0;
    }
    return end;
}    


int main(){
    int end = 1;
    int opc = 0;

    while (end){
        printf("Hoy nos encontramos con los ejercicios del taller 2.\n");
        printf("Seleccione el ejercicio que desea mirar.\n");
        printf("Puntos del taller.\n");
        printf("[1]Punto 1.\n");
        printf("[2]Punto 2.\n");
        printf("[3]Punto 3.\n");
        printf("[4]Punto 4.\n");
        printf("[5]Punto 5.\n");
        printf("[6]Punto 6.\n");
        printf("[7]Punto 7.\n");
        printf("[8]Punto 8.\n");
        printf("[9]Punto 9.\n");
        printf("[10]Punto 10.\n");
        printf("[11]Punto 11.\n");

        scanf("%d",&opc);

        printf("Selecionaste la opcion %d.\n",opc);

        if (opc == 1){
            printf("Este es el ejercicio 1.\n");
            FunVolumen();
            end = terminar();
        } else if (opc == 2){
            printf("Este es el ejercicio 2.\n");
            Celsius();
            end = terminar();
        } else if (opc == 3){
            printf("Este es el ejercicio 3.\n");
            Conversion();
            end = terminar();
        } else if (opc == 4){
            printf("Este es el ejercicio 4.\n");
            Promedio();
            end = terminar();
        } else if (opc == 5){
            printf("Este es el ejercicio 5.\n");
            Ecuacion();
            end = terminar();
        } else if (opc == 6){
            printf("Este es el ejercicio 6.\n");
            Funcion();
            end = terminar();
        } else if (opc == 7){
            printf("Este es el ejercicio 7.\n");
            Salario();
            end = terminar();
        } else if (opc == 8){
            printf("Este es el ejercicio 8.\n");
            Resultados();
            end = terminar();
        } else if (opc == 9){
            printf("Este es el ejercicio 9.\n");
            AreaTriangulo();
            end = terminar();
        } else if (opc == 10){
            printf("Este es el ejercicio 10.\n");
            AreaTrianguloRadianes();
            end = terminar();
        } else if (opc == 11){
            printf("Este es el ejercicio 11.\n");
            Prestamo();
            end = terminar();
        }
    }

    return 0;
}
