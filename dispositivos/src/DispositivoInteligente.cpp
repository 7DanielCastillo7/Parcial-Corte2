#include "Archivo.h"

Dispositivointeligente::Dispositivointeligente(string nom, bool est, float consumo, bool con){
    nombre = nom;
    estado = est;
    consumoenergia = consumo;
    control= con;
}

bool Dispositivointeligente::encender(){
    if (!estado) {

        estado = true;
        cout << "Dispositivo " << nombre << " encendido." << endl;
        return estado;
    }
    else {
        cout << "El dispositivo " << nombre << " ya esta encendido." << endl;
        return estado;
    }
}

bool Dispositivointeligente::apagar(){
    if (estado){
        estado = false;
        cout << "Dispositivo " << nombre << " apagado. " << endl;
        return false;
    }
    else {
        cout << "El dispositivo " << nombre << " ya esta apagado." << endl;
        return false; 
    }
}

float Dispositivointeligente::medirconsumo(float horas){
    if (horas > 0) {
        float consumototal = consumoenergia * horas;
        return consumototal;
    }
    else {
        cout << "El dispositivo " << nombre << " esta apagado. No hay consumo," << endl;
        return 0.0;
    }
}    

void Dispositivointeligente::bloquearcontrolremoto(){
    if (!control) {
        control = true;
        cout << "El control remoto del dispositivo " << nombre << " ha sido bloqueado." << endl;
    }
    else {
        cout << "El control remoto del dispositivo " << nombre << " ya estaba bloqueado." << endl;
    }
}

string Dispositivointeligente::dispositivo(){
    string _nombre=nombre;
    return  _nombre;
}