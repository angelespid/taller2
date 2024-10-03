#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    string cadena;
    int suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Ingrese la cadena de caracteres numericos: ";
    cin >> cadena;

    int longitud = cadena.length();
    int resto = longitud % n;
    if (resto != 0) {
        cadena = string(n - resto, '0') + cadena;
    }

    for (int i = 0; i < cadena.length(); i += n) {
        string numero_str = cadena.substr(i, n);
        int numero;
        stringstream(numero_str) >> numero;
        suma += numero;
    }

    cout << "Original: " << cadena << endl;
    cout << "Suma: " << suma << endl;

    return 0;
}
