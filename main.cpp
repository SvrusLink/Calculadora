#include <iostream>
#include <cmath>
#include suma.h
#include resta.h
#include multiplicacion.h
#include division.h
#include porcentaje.h
#include exponente.h

using namespace std;

int main() {
    int num1, num2;
    char opc;
    bool contin = true;

    while (contin) {
        cout << "\n\t¡Bienvenid@!\n\tCalculadora Basica en C++\n" << endl;
        cout << "Elige una operación"<<endl;
        cout << "+. SUMA\n-. RESTA\n*. MULTIPLICACIÓN\n/. DIVISIÓN\n%. PORCENTAJE\n^ EXPONENTE\ns. SALIR\n" << endl;
        cout << "Ingresa el simbolo de la operacón a realizar: ";
        cin >> opc;

        if (opc == 's' || opc == 'S') {
            contin = false;
            cout << "¡Gracias por usar la calculadora!" << endl;
            break;
        }

        if (opc == '%') {
            cout << "\nIngresa el número base: ";
            cin >> num1;
            cout << "Ingresa el porcentaje: ";
            cin >> num2;
            cout << num2 << "% de " << num1 << " es: " << porcentaje(num1, num2) << endl;
        } else if(opc == '^'){
            cout <<"\nIngresa el número base: ";
            cin>> num1;
            cout <<"Ingresa el exponente: ";
            cin>> num2;
            cout<< "La "<< num2 <<"potencia de " << num1 << " es: " << exponente(num1, num2) << endl;
        }
        else {
            cout << "\nIngresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
        }


            switch (opc) {
                case '+':
                    cout << "El resultado de la suma es: " << suma(num1, num2) << endl;
                    break;
                case '-':
                    cout << "El resultado de la resta es: " << resta(num1, num2) << endl;
                    break;
                case '*':
                    cout << "El resultado de la multiplicación es: " << multiplicacion(num1, num2) << endl;
                    break;
                case '/':
                    if (num2 != 0)
                        cout << "El resultado de la división es: " << division(num1, num2) << endl;
                    else
                        cout << "Error: División por cero no permitida." << endl;
                    break;
            }
        }

        // Pausar antes de realizar otra operación
        cout << "\nPresiona Enter para continuar...";
        cin.ignore();
        cin.get();
}

