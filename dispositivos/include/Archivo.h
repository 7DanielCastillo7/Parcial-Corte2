#ifndef Dispositivo_H
#define Dispositivo_H

#include <string>
#include <iostream>
using namespace std;

class Dispositivointeligente {
    private:
    string nombre;
    bool estado;
    float consumoenergia; // consumo en vatios
    bool control;
    public:
    Dispositivointeligente(string nom, bool est, float consumo, bool con); 
    
    //metodos
    bool encender();
    bool apagar();
    float medirconsumo(float horas);
    void bloquearcontrolremoto();
    string dispositivo(); 

    
};
#endif 