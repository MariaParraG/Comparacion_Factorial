#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
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
