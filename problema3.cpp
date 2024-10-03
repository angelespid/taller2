#include <iostream>
using namespace std;

bool sonIguales(const char cadena1[], const char cadena2[]) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
        i++;
    }
    if (cadena1[i] == '\0' && cadena2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char cadena1[] = "Hola";
    char cadena2[] = "Hola";
    char cadena3[] = "Adios";

    if (sonIguales(cadena1, cadena2)) {
        cout << "Las cadenas \"" << cadena1 << "\" y \"" << cadena2 << "\" son iguales." << endl;
    } else {
        cout << "Las cadenas \"" << cadena1 << "\" y \"" << cadena2 << "\" son diferentes." << endl;
    }

    if (sonIguales(cadena1, cadena3)) {
        cout << "Las cadenas \"" << cadena1 << "\" y \"" << cadena3 << "\" son iguales." << endl;
    } else {
        cout << "Las cadenas \"" << cadena1 << "\" y \"" << cadena3 << "\" son diferentes." << endl;
    }

    return 0;
}
