# Comparación de Desempeño: Factorial Iterativo vs. Factorial Recursivo

## Introducción
En este documento se compara el desempeño de dos enfoques para calcular el factorial de un número en C: el enfoque iterativo y el recursivo. Se analizarán dos métricas principales: el tiempo de ejecución y el uso de memoria.

## Métodos Implementados

### 1. Factorial Iterativo
Este método utiliza un bucle `for` para multiplicar los números desde 1 hasta `n`. Es más eficiente en cuanto a uso de memoria, ya que no requiere llamadas recursivas adicionales.

**Ventajas:**
- Menor uso de memoria.
- Generalmente más rápido para valores grandes de `n`.

**Desventajas:**
- Puede ser menos intuitivo que el método recursivo en términos de comprensión matemática.

### 2. Factorial Recursivo
Este método calcula el factorial llamándose a sí mismo hasta alcanzar el caso base (`n == 0` o `n == 1`).

**Ventajas:**
- Más fácil de entender desde un punto de vista matemático.
- Código más limpio y expresivo.

**Desventajas:**
- Usa más memoria debido a las múltiples llamadas recursivas.
- Puede ser más lento debido al overhead de las llamadas a función.
- Puede causar desbordamiento de pila en valores grandes de `n`.

## Comparación de Desempeño

| Método         | Tiempo de ejecución (segundos) | Uso de memoria |
|--------------|--------------------------|---------------|
| Iterativo     | Menor                      | Bajo          |
| Recursivo     | Mayor                      | Alto          |

- **Tiempo de Ejecución:** El método iterativo es generalmente más rápido, ya que evita las múltiples llamadas a funciones.
- **Uso de Memoria:** El método recursivo usa más memoria debido a la pila de llamadas.

## Conclusión
Para cálculos eficientes y grandes valores de `n`, el método iterativo es la mejor opción debido a su menor consumo de memoria y mejor desempeño en tiempo de ejecución. Sin embargo, para pequeños valores de `n` y propósitos educativos, el método recursivo sigue siendo una opción válida por su claridad matemática.

