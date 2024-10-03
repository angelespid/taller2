#include <iostream>
#include <string>

void convertirEnteroACadena(int numero, std::string &cadena) {
    if (numero == 0) {
        cadena = "0";
        return;
    }
    
    bool esNegativo = false;
    if (numero < 0) {
        esNegativo = true;
        numero = -numero;
    }

    std::string temp = "";
    
    while (numero > 0) {
        int digito = numero % 10;
        temp += (digito + '0');
        numero /= 10;
    }

    cadena = std::string(temp.rbegin(), temp.rend());

    if (esNegativo) {
        cadena = "-" + cadena;
    }
}

int main() {
    int numero;
    std::string resultado;

    std::cout << "Ingresa un numero: ";
    std::cin >> numero;

    convertirEnteroACadena(numero, resultado);

    std::cout << "La cadena es: " << resultado << std::endl;

    return 0;
}
