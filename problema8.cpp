#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    string texto = "";
    string numeros = "";

    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            numeros += cadena[i];
        } else {
            texto += cadena[i];
        }
    }

    cout << "Original: " << cadena << endl;
    cout << "Texto: " << texto << ". Numero: " << numeros << "." << endl;

    return 0;
}
