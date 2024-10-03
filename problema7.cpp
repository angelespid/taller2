#include <iostream>
#include <string>

using namespace std;

string eliminarRepetidos(string cadena) {
    string resultado = "";  
    
    for (int i = 0; i < cadena.length(); i++) {
        bool repetido = false;

        
        for (int j = 0; j < resultado.length(); j++) {
            if (cadena[i] == resultado[j]) {
                repetido = true;
                break;
            }
        }

        
        if (!repetido) {
            resultado += cadena[i];
        }
    }

    return resultado;
}

int main() {
    string cadena;

    
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

   
    string sinRepetidos = eliminarRepetidos(cadena);

   
    cout << "Original: " << cadena << endl;
    cout << "Sin repetidos: " << sinRepetidos << endl;

    return 0;
}
