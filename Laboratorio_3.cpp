#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Persona
struct Persona {
    string nombre;
    string apellido;
    int edad;
    string telefono;
};

int main() {
    // Declaración de un arreglo de estructuras Persona para almacenar los datos de cinco personas
    Persona personas[5];

    // Ingreso de datos para cada persona
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese los datos de la persona " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Apellido: ";
        cin >> personas[i].apellido;
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Telefono: ";
        cin >> personas[i].telefono;
    }

    // Mostrar los datos ingresados
    for (int i = 0; i < 5; ++i) {
        cout << "Persona " << i+1 << ": " << personas[i].nombre << " " << personas[i].apellido << ", Edad: " << personas[i].edad << ", Telefono: " << personas[i].telefono << endl;
    }

    return 0; // Devolver 0 indica que el programa finalizó correctamente
}

