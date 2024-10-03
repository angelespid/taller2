
void setup() {
    Serial.begin(9600);
    Serial.println("Ingrese la cantidad de dinero:");
}

void loop() {
    if (Serial.available() > 0) {
        long cantidad = Serial.parseInt();
        long faltante = cantidad;
        
        int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
        int cantidadBilletesMonedas[10];

        for (int i = 0; i < 10; i++) {
            cantidadBilletesMonedas[i] = faltante / denominaciones[i];
            faltante = faltante % denominaciones[i];
        }

        for (int i = 0; i < 10; i++) {
            Serial.print(denominaciones[i]);
            Serial.print(": ");
            Serial.println(cantidadBilletesMonedas[i]);
        }

        if (faltante > 0) {
            Serial.print("Faltante: ");
            Serial.println(faltante);
        } else {
            Serial.println("Faltante: 0");
        }

        delay(1000);
        Serial.println("\nIngrese otra cantidad de dinero:");
    }
}
