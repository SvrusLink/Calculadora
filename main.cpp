#include <iostream>
#include <cmath>
#include "suma.h"
#include "resta.h"
#include "multiplicacion_y_division.h"
#include "porcentaje.h"
#include "exponente.h"
#include "raiz.h"

using namespace std;

int main() {
    int numero1, numero2;
    char opc;
    bool contin = true;

    while (contin) {
        cout << "\n\t¡Bienvenid@!\n\tCalculadora Basica en C++\n" << endl;
        cout << "Elige una operación" << endl;
        cout << "+. SUMA\n-. RESTA\n*. MULTIPLICACIÓN\n/. DIVISIÓN\n%. PORCENTAJE\n^. EXPONENTE\nr. RAÍZ CUADRADA\ns. SALIR\n" << endl;
        cout << "Ingresa el símbolo de la operación a realizar: ";
        cin >> opc;

        if (opc == 's' || opc == 'S') {
            contin = false;
            cout << "¡Gracias por usar la calculadora!" << endl;
            break;
        }

        if (opc == '%') {
            cout << "\nIngresa el número base: ";
            cin >> numero1;
            cout << "Ingresa el porcentaje: ";
            cin >> numero2;
            cout << numero2 << "% de " << numero1 << " es: " << porcentaje(numero1, numero2) << endl;

        } else if (opc == '^') {
            cout << "\nIngresa el número base: ";
            cin >> numero1;
            cout << "Ingresa el exponente: ";
            cin >> numero2;
            cout << "La " << numero2 << "ª potencia de " << numero1 << " es: " << exponente(numero1, numero2) << endl;

        } else if (opc == 'r') {
            cout << "\nIngresa el número para calcular su raíz cuadrada: ";
            cin >> numero1;
            cout << "La raíz cuadrada de " << numero1 << " es: " << raiz(numero1) << endl;

        } else {
            cout << "\nIngresa el primer número: ";
            cin >> numero1;
            cout << "Ingresa el segundo número: ";
            cin >> numero2;

            switch (opc) {
                case '+':
                    cout << "El resultado de la suma es: " << suma(numero1, numero2) << endl;
                    break;
                case '-':
                    cout << "El resultado de la resta es: " << resta(numero1, numero2) << endl;
                    break;
                case '*':
                    cout << "El resultado de la multiplicación es: " << multiplicacion(numero1, numero2) << endl;
                    break;
                case '/':
                    if (numero2 != 0)
                        cout << "El resultado de la división es: " << division(numero1, numero2) << endl;
                    else
                        cout << "Error: División por cero no permitida." << endl;
                    break;
                default:
                    cout << "Operación no válida. Inténtalo de nuevo." << endl;
                    break;
            }
        }

        // Pausar antes de realizar otra operación
        cout << "\nPresiona Enter para continuar...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
