#include <iostream>

using namespace std;

bool esCuadradoMagico(int matriz[3][3], int n) {
    int sumaMagica = 0;
    int sumaDiagonal1 = 0, sumaDiagonal2 = 0;

    // Suma de la primera fila para establecer la suma mágica
    for (int j = 0; j < n; j++) {
        sumaMagica += matriz[0][j];
    }

    // Verificar las filas y columnas
    for (int i = 0; i < n; i++) {
        int sumaFila = 0, sumaColumna = 0;

        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }

        if (sumaFila != sumaMagica || sumaColumna != sumaMagica) {
            return false;
        }

        // Sumar las diagonales
        sumaDiagonal1 += matriz[i][i];
        sumaDiagonal2 += matriz[i][n - 1 - i];
    }

    // Verificar las diagonales
    if (sumaDiagonal1 != sumaMagica || sumaDiagonal2 != sumaMagica) {
        return false;
    }

    return true;
}

void imprimirMatriz(int matriz[3][3], int n) {
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int n = 3;
    int matriz[n][n];

    // Entrada de la matriz
    cout << "Ingrese los elementos de la matriz (3x3), uno por uno:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor para la posición [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Imprimir la matriz ingresada
    imprimirMatriz(matriz, n);

    // Verificar si es un cuadrado mágico
    if (esCuadradoMagico(matriz, n)) {
        cout << "La matriz es un cuadrado mágico." << endl;
    } else {
        cout << "La matriz NO es un cuadrado mágico." << endl;
    }

    return 0;
}
