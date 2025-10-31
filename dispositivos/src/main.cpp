#include "Archivo.h"
#include <iostream>
using namespace std;

int main() {
    
    Dispositivointeligente celular("Celular Inteligente", false, 10.5, false);
    Dispositivointeligente nevera("Nevera Inteligente", true, 150.0, false );
    
    cout << "Nombre del dispositivo: " << celular.dispositivo() << endl;
    celular.encender();

    float consumo = celular.medirconsumo(5);
    cout << "Consumo del "  << celular.dispositivo() << " despues de 5 horas es: "<< consumo << " vatios." << endl;
    
    celular.apagar();

    float consumoapagado = celular.medirconsumo(7);
    cout << "Consumo del "  << celular.dispositivo() << " despues de 7 horas (apagado) es: "<< consumoapagado << " vatios." << endl;

    celular.bloquearcontrolremoto();
    
    //nevera
    cout << "Nombre del dispositivo: " << nevera.dispositivo() << endl;

    nevera.encender();

    consumo = nevera.medirconsumo(2);
    cout << "Consumo del "  << nevera.dispositivo() << " despues de 2 horas es: "<< consumo << " vatios." << endl;
    
    nevera.apagar();

    consumoapagado = nevera.medirconsumo(10);
    cout << "Consumo del "  << nevera.dispositivo() << " despues de 10 horas (apagado) es: "<< consumoapagado << " vatios." << endl;

    nevera.bloquearcontrolremoto();

    return 0;
}