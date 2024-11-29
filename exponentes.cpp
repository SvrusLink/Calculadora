#include <iostream>
#include <cmath> // Para usar la función pow

// Declaración de la función
double potencia(double num1, double num2);

int main() {
    double num1, num2;

    // Pedir los números al usuario
    std::cout << "num1: ";
    std::cin >> num1;

    std::cout << "num2: ";
    std::cin >> num2;

    // Llamar a la función para calcular la potencia
    double resultado = potencia(num1, num2);

    // Mostrar el resultado
    std::cout << resultado << std::endl;

    return 0;
}

// Definición de la función
double potencia(double num1, double num2) {
    return pow(num1, num2); // Usar la función pow de la biblioteca <cmath>
}