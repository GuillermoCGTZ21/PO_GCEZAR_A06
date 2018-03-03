//
// Created by el_me on 02/03/2018.
//


#include <cmath>
#include "FormatoHora.h"

FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
}
FormatoHora operator< (const FormatoHora &h1, const FormatoHora &h2){
    if (h1.horas < h2.horas){
        std::cout<< "\n"<<"Hora 2 es mayor que hora 1"<<"\n";
    }
}
FormatoHora operator> (const FormatoHora &h1, const FormatoHora &h2){
    if (h1.horas > h2.horas){
        std::cout<< "\n"<<"Hora 1 es mayor que hora 2"<<"\n";
    }
}
FormatoHora operator<= (const FormatoHora &h1, const FormatoHora &h2){
    if (h1.horas <= h2.horas){
        std::cout<< "\n"<<"Hora 1 es menor o igual a la hora 2"<<"\n";
    }
}
FormatoHora operator>= (const FormatoHora &h1, const FormatoHora &h2){
    if (h1.horas >= h2.horas){
        std::cout<< "\n"<<"Hora 1 es mayor o igual a la hora 2"<<"\n";
    }
}
FormatoHora operator!= (const FormatoHora &h1, const FormatoHora &h2){
    if (h1.horas != h2.horas && h1.minutos!=h2.minutos && h1.segundos != h2.segundos){
        std::cout<< "\n"<<"La Hora 1 y Hora 2 son completamente diferentes"<<"\n";
    }else if (h1.horas != h2.horas || h1.minutos!=h2.minutos || h1.segundos != h2.segundos) {
        std::cout<< "\n"<<"Horas, minutos o segundos son diferentes en las dos horas"<<"\n";
    }
}


bool FormatoHora::validaHrs1(FormatoHora &h1) {
    if (h1.horas >= 0 && h1.horas <= 23) {
        bool horacorrecta = true;
        return horacorrecta;
    } else if (h1.horas < 0 || h1.horas > 23) {
        bool horacorrecta = false;
        h1.horas = h1.horas -h1.horas;
        std::cout<<"\n"<<"Hora 1 esta fuera de los límites, porfavor inserta una hora entre 0 y 23"<<"\n";
        return horacorrecta;
    }
}
bool FormatoHora::validaHrs2(FormatoHora &h2) {
    if (h2.horas >= 0 && h2.horas <= 23) {
        bool horacorrecta = true;
        return horacorrecta;
    } else if (h2.horas < 0 || h2.horas > 23) {
        bool horacorrecta = false;
        h2.horas = h2.horas -h2.horas;
        std::cout << "\n" << "Hora 2 esta fuera de los límites, porfavor inserta una hora entre 0 y 23"<<"\n";
        return horacorrecta;
    }
}

bool FormatoHora::validaMS1(FormatoHora &h1 ) {
    if (h1.minutos >= 0 && h1.minutos <= 59 && h1.segundos >= 0 && h1.segundos <= 59) {
        bool minutosYSegValidos = true;
        return minutosYSegValidos;
    } else if (h1.minutos < 0 || h1.minutos > 59 || h1.segundos < 0 || h1.segundos > 59) {
        bool minutosYSegValidos = false;
        h1.minutos = h1.minutos - h1.minutos;
        h1.segundos = h1.segundos - h1.segundos;
        std::cout << "\n" << "Minutos y/o Segundos de la hora 1 no están dentro del rango, porfavor, incerta un valor entre 0 y 59"<<"\n";
        return minutosYSegValidos;
    }
}
bool FormatoHora::validaMS2(FormatoHora &h2 ) {
    if (h2.minutos >= 0 && h2.minutos <= 59 && h2.segundos >= 0 && h2.segundos <= 59) {
        bool minutosYSegValidos = true;
        return minutosYSegValidos;
    } else if (h2.minutos < 0 || h2.minutos > 59 || h2.segundos < 0 || h2.segundos > 59) {
        bool minutosYSegValidos = false;
        h2.minutos = h2.minutos - h2.minutos;
        h2.segundos = h2.segundos - h2.segundos;
        std::cout << "\n" << "Minutos y/o Segundos de la hora 2 no están dentro del rango, porfavor, incerta un valor entre 0 y 59"<<"\n";
        return minutosYSegValidos;
    }
}
