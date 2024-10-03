#include <iostream>
using namespace std;

int main() {
    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidadBilletesMonedas[10];

    cout << "Ingrese la cantidad de dinero: ";
    long cantidad;
    cin >> cantidad;

    long faltante = cantidad;

    for (int i = 0; i < 10; i++) {
        cantidadBilletesMonedas[i] = faltante / denominaciones[i];
        faltante = faltante % denominaciones[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << denominaciones[i] << ": " << cantidadBilletesMonedas[i] << endl;
    }

    if (faltante > 0) {
        cout << "Faltante: " << faltante << endl;
    } else {
        cout << "Faltante: 0" << endl;
    }

    return 0;
}
