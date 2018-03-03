#include <iostream>
#include "FormatoHora.h"

int main() {
    FormatoHora hora1 (21, 32,6);
    FormatoHora hora2 (21, 06,32 );
    FormatoHora validaHr1 = *new FormatoHora(hora1);
    FormatoHora validaHr2 = *new FormatoHora(hora2);
    validaHr1.validaHrs1(hora1);
    validaHr2.validaHrs2(hora2);

    FormatoHora validaMS1 = *new FormatoHora(hora1);
    FormatoHora validaMS2 = *new FormatoHora(hora2);
    validaMS1.validaMS1(hora1);
    validaMS2.validaMS2(hora2);

    std::cout<< "Hora 1= "<< hora1.horas << ":" << hora1.minutos << ":" << hora1.segundos<< "\n";
    std::cout<< "Hora 2= "<< hora2.horas << ":" << hora2.minutos << ":" << hora2.segundos<< "\n";

    FormatoHora horamayor = hora1 < hora2;
    FormatoHora horamenor = hora1 > hora2;
    FormatoHora horamenorigual = hora1 <= hora2;
    FormatoHora horamayorigual = hora1 >= hora2;
    FormatoHora horadiferente = hora1 != hora2;
}