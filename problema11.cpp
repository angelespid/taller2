#include <iostream>

using namespace std;

const int FILAS = 3;  // Para ejemplo pequeño (cambiar a 15 para tamaño completo)
const int ASIENTOS_POR_FILA = 5;  // Para ejemplo pequeño (cambiar a 20 para tamaño completo)

void mostrarSala(char sala[FILAS][ASIENTOS_POR_FILA]) {
    cout << "Sala de cine:" << endl;
    cout << "+---------------------+" << endl;
    for (int i = 0; i < FILAS; i++) {
        cout << "| ";
        for (int j = 0; j < ASIENTOS_POR_FILA; j++) {
            cout << sala[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "+---------------------+" << endl;
}

void reservarAsiento(char sala[FILAS][ASIENTOS_POR_FILA], char fila, int asiento) {
    fila = toupper(fila);  // Convertir la fila a mayúscula para evitar problemas con minúsculas
    int filaIndex = fila - 'A';  // Convertimos la fila de letra a índice
    if (filaIndex >= 0 && filaIndex < FILAS && asiento >= 1 && asiento <= ASIENTOS_POR_FILA) {
        if (sala[filaIndex][asiento - 1] == '-') {
            sala[filaIndex][asiento - 1] = '+';
            cout << "Reserva realizada correctamente." << endl;
        } else {
            cout << "El asiento ya está reservado." << endl;
        }
    } else {
        cout << "Entrada inválida." << endl;
    }
}

void cancelarReserva(char sala[FILAS][ASIENTOS_POR_FILA], char fila, int asiento) {
    fila = toupper(fila);  // Convertir la fila a mayúscula para evitar problemas con minúsculas
    int filaIndex = fila - 'A';  // Convertimos la fila de letra a índice
    if (filaIndex >= 0 && filaIndex < FILAS && asiento >= 1 && asiento <= ASIENTOS_POR_FILA) {
        if (sala[filaIndex][asiento - 1] == '+') {
            sala[filaIndex][asiento - 1] = '-';
            cout << "Reserva cancelada correctamente." << endl;
        } else {
            cout << "El asiento ya está disponible." << endl;
        }
    } else {
        cout << "Entrada inválida." << endl;
    }
}

int main() {
    char sala[FILAS][ASIENTOS_POR_FILA];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < ASIENTOS_POR_FILA; j++) {
            sala[i][j] = '-';
        }
    }

    char opcion;
    do {
        mostrarSala(sala);

        cout << "Seleccione una opción:" << endl;
        cout << "1. Reservar asiento" << endl;
        cout << "2. Cancelar reserva" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        if (opcion == '1') {
            char fila;
            int asiento;
            cout << "Ingrese la fila (A-C para este ejemplo): ";
            cin >> fila;
            cout << "Ingrese el número de asiento (1-5 para este ejemplo): ";
            cin >> asiento;
            reservarAsiento(sala, fila, asiento);
        } else if (opcion == '2') {
            char fila;
            int asiento;
            cout << "Ingrese la fila (A-C para este ejemplo): ";
            cin >> fila;
            cout << "Ingrese el número de asiento (1-5 para este ejemplo): ";
            cin >> asiento;
            cancelarReserva(sala, fila, asiento);
        }
    } while (opcion != '3');

    return 0;
}
