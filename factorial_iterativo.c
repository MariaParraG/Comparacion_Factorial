#include <stdio.h>

// Función para calcular el factorial de un número de forma iterativa
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("El factorial de un número negativo no está definido.\n");
    } else {
        printf("El factorial de %d es %llu\n", numero, factorial(numero));
    }
    
    return 0;
}
