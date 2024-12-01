//Porcentajes.c

using namespace std;

void CalcularPorcentaje() {
    double total, porcentaje;

    // Solicitar los valores al usuario
    cout << "Ingrese el valor total: ";
    cin >> total;
    cout << "Ingrese el porcentaje a calcular: ";
    cin >> porcentaje;

    // Calcular el porcentaje
    double resultado = (total * porcentaje) / 100.0;

    // Mostrar el resultado
    cout << "El " << porcentaje << "% de " << total << " es: " << resultado << std::endl;
}