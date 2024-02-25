#include <iostream>

// Función que toma dos parámetros
void suma(int a, int b) {
    int resultado = a + b;
    std::cout << "La suma de " << a << " y " << b << " es: " << resultado << std::endl;
}

int main() {
    // 3 y 4 son argumentos que se pasan a los parámetros a y b de la función suma
    suma(3, 4);

    return 0;
}
