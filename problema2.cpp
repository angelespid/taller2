#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAMANO = 10;

char generarLetra() {
    return 'A' + rand() % 26;
}

void inicializarContador(int contador[26]) {
    for (int i = 0; i < 26; i++) {
        contador[i] = 0;
    }
}

int main() {
    char arreglo[TAMANO];
    int contador[26];

    srand(time(0));
    inicializarContador(contador);

    for (int i = 0; i < TAMANO; i++) {
        arreglo[i] = generarLetra();
        contador[arreglo[i] - 'A']++;
    }

    cout << "Arreglo generado: ";
    for (int i = 0; i < TAMANO; i++) {
        cout << arreglo[i];
    }
    cout << endl;

    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            cout << char('A' + i) << ": " << contador[i] << endl;
        }
    }

    return 0;
}
