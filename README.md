# Ejemplos-C++
Repositorio creado para entrega de codigos de ejemplos practicos C++

# [*Recursividad* ejemplo](https://github.com/keriz-rh/Ejemplos-C-/blob/main/Ejemplorecursividad.cpp)

**Explicación:**
1.	La función factorial es recursiva y se define para calcular el factorial de un número n. En el caso base (cuando n es 0 o 1), la función devuelve 1. En caso contrario, realiza una llamada recursiva multiplicando n por el factorial del número anterior (n−1).
2.	En la función main, el usuario ingresa un número entero. Luego, se llama a la función factorial con ese número como argumento, y el resultado se almacena en la variable resultado.
3.	Finalmente, se imprime el resultado del cálculo del factorial en la consola.
Este ejemplo ilustra cómo las funciones recursivas pueden ser utilizadas para resolver problemas de manera elegante y concisa, dividiendo el problema original en subproblemas más pequeños. La recursividad en el cálculo factorial refleja la definición matemática del factorial como el producto de un número por el factorial del número anterior.

# [*Parametro ejemplo*](https://github.com/keriz-rh/Ejemplos-C/blob/main/parametro.cpp)
**Explicación:**
+ "parámetro" y "argumento" no son lo mismo en programación. Son conceptos relacionados, pero tienen significados distintos:
Parámetro: Es una variable o identificador que se utiliza en la definición de una función para representar el valor que se espera que se pase a la función cuando se la llama. Los parámetros son parte de la declaración de + la función y actúan como marcadores de posición.
+ Argumento: Es el valor real que se proporciona cuando se llama a una función. Los argumentos se asignan a los parámetros correspondientes de la función durante la llamada. Son los datos reales que la función utilizará en su ejecución.
+ En este ejemplo, la función suma tiene dos parámetros (a y b). Cuando la función se llama en main con los valores 3 y 4, esos valores se convierten en los argumentos que se asignan a los parámetros a y b. El resultado es la suma de esos dos valores, que se imprime en la consola. En este caso, 3 y 4 son los argumentos que se pasan a los parámetros de la función.

# [programa de funciones como parámetros](https://github.com/keriz-rh/Ejemplos-C/blob/main/Calculadora.cpp)
**Este código en C++ demuestra el uso de funciones y objetos de función para realizar operaciones matemáticas básicas como suma, resta, multiplicación y división.**
<Observaciones:>

+ Se utiliza la biblioteca <functional> para trabajar con objetos de función (function).
+ El código está diseñado para ser simple y educativo, demostrando la flexibilidad de las funciones y objetos de función en C++.

# [Aritmetica de punteros](https://github.com/keriz-rh/Ejemplos-C/blob/main/Arimetica%20de%20punteros.cpp)

+ Paso 1: Se solicita al usuario que ingrese la cantidad de valores (n) que desea introducir.

+ Paso 2: Se asigna dinámicamente memoria para un arreglo de tamaño n usando el operador new.

+ Paso 3: Se utiliza un bucle for para que el usuario ingrese los valores del arreglo uno por uno.

+ Paso 4: Se llama a la función calcularSuma para obtener la suma de los valores en el arreglo.

+ Paso 5: Se muestra la suma en la pantalla.

+ Paso 6: Se llama a la función calcularPromedio para obtener el promedio y se muestra en la pantalla.

+ Paso 7: Se libera la memoria asignada dinámicamente utilizando delete[].

+ Paso 8: Se retorna 0 para indicar que la ejecución del programa fue exitosa.
