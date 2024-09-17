#include <stdio.h>
//Realizado por Johan Ordoñez y Esteban Escarraga
//C. Ejercicio 3: Cálculo del área de un triángulo utilizando funciones

/*
* Descripción: Escribe un programa que calcule el área de un triángulo dados la base y la altura.
Debes utilizar una función para calcular el área y pasar los valores por referencia.
 */

//Llamado de funciones antes del main
void calcular_area(float *base, float *altura, float *area);
void solicitar_valores(float *base, float *altura);

int main() {
    float base, altura, area;

    // Solicitar los valores de la base y la altura
    solicitar_valores(&base, &altura);

    // Calcular el area
    calcular_area(&base, &altura, &area);

    // Mostrar el area calculada
    printf("El area del triangulo es: %.2f metros cuadrados\n", area);

    return 0;
}
//Creacion de funciones

/*Definir una función calcular_area(float *base, float *altura, float *area) que calcule el
área usando los punteros para los valores de la base, la altura y el área resultante.
*/
// Funcion para calcular el area de un triangulo
void calcular_area(float *base, float *altura, float *area) {
    *area = (*base * *altura) / 2;
}

/*
*Solicitar al usuario los valores de la base y altura, luego calcular y mostrar el área del
triángulo.
 *
 */

// Funcion para solicitar los valores de base y altura al usuario
void solicitar_valores(float *base, float *altura) {
    printf("******************* Programa para calcular el area del trinagulo *******************\n");
    printf("Introduce la base (m) del triangulo:_ \n");
    scanf("%f", base);
    printf("Introduce la altura (m) del triangulo:_ \n");
    scanf("%f", altura);
}