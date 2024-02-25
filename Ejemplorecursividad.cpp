#include <iostream>

//Funcion recursiva para calcular el factorial
int factorial(int n ){
    if (n == 0 || n == 1){
        return 1; // caso base: factorial de o o 1 es 1
    } else {
        return n * factorial(n - 1); //llamada recursiva
    }
}

int main () {
    int numero;
    std::cout << "ingrese un numero para calcular su factorial: ";
    std::cin >> numero;

    //Llamada a la función recursiva 
    int resultado = factorial (numero);

    std::cout <<"Eñ factorial de " << numero << " es: " << resultado << std::endl;

    return 0;
}