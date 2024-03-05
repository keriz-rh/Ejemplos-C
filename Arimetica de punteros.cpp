#include <iostream>
using namespace std;

// Función para calcular la suma de un arreglo
int calcularSuma(int *arr, int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return suma;
    }

    // Función para calcular el promedio de un arreglo
    float calcularPromedio(int suma, int size) {
    return static_cast<float>(suma) / size;
}

int main() {
    // Paso 1: Solicitar al usuario la cantidad de valores a ingresar
    int n;
    cout << "¿Cuántos valores ingresará? ";
    cin >> n;

    // Paso 2: Reservar memoria para el arreglo dinámicamente
    int *ptr = new int[n];

    // Paso 3: Ingresar los valores del arreglo
    for (int i = 0; i < n; i++) {
        cout << "Introduzca el valor " << i + 1 << ": ";
        cin >> ptr[i];
    }

    // Paso 4: Calcular la suma utilizando la función
    int suma = calcularSuma(ptr, n);

    // Paso 5: Mostrar la suma
    cout << "Suma: " << suma << endl;

    // Paso 6: Calcular y mostrar el promedio utilizando la función
    float promedio = calcularPromedio(suma, n);
    cout << "Promedio: " << promedio << endl;

    // Paso 7: Liberar la memoria del arreglo
    delete[] ptr;

    // Paso 8: Retornar 0 para indicar una ejecución exitosa
    return 0;
}
