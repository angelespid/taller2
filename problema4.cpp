#include <iostream>
#include <string>

std::string limpiarCadena(const std::string& cadena) {
    std::string resultado = "";
    for (char c : cadena) {
        if (c >= '0' && c <= '9') {
            resultado += c;
        }
    }
    return resultado;
}

int convertirCadenaAEnteroManual(const std::string& cadena) {
    int numero = 0;
    for (int i = 0; i < cadena.length(); ++i) {
        numero = numero * 10 + (cadena[i] - '0');
    }
    return numero;
}

int main() {
    std::string entrada;
    std::cout << "Ingresa una cadena de caracteres numericos o un numero: ";
    std::getline(std::cin, entrada);
    entrada = limpiarCadena(entrada);

    int numeroConvertido = convertirCadenaAEnteroManual(entrada);
    std::cout << "El numero entero es: " << numeroConvertido << std::endl;

    return 0;
}
