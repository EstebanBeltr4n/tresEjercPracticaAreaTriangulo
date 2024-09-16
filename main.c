#include <stdio.h>
//Realizado por Johan Ordoñez y Esteban Escarraga
//C. Ejercicio 3: Cálculo del área de un triángulo utilizando funciones

// Funcion para calcular el area de un triangulo
void calcular_area(float *base, float *altura, float *area) {
    *area = (*base * *altura) / 2;
}

// Funcion para solicitar los valores de base y altura al usuario
void solicitar_valores(float *base, float *altura) {
    printf("Introduce la base del triangulo: ");
    scanf("%f", base);
    printf("Introduce la altura del triangulo: ");
    scanf("%f", altura);
}

int main() {
    float base, altura, area;

    // Solicitar los valores de la base y la altura
    solicitar_valores(&base, &altura);

    // Calcular el area
    calcular_area(&base, &altura, &area);

    // Mostrar el area calculada
    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}
