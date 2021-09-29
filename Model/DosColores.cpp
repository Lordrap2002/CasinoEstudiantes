//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar){
    float gonzosResultado;
    srand(time(NULL));
    numeroJugador = 1+rand()%6;
    numeroCasino = 1+rand()%6;
    colorCasino = rand()%2;
    cout << "Tu numero aleatorio es: "<< numeroJugador << endl
         << "Elije un color: " << endl
         << "1. Blanco" << endl
         << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador;
    cout << "Numero casino: "<< numeroCasino << endl;
    cout << "Color casino: ";
    if(colorCasino == 0){
        cout << "Blanco." << endl;
    }else{
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if(numeroJugador == numeroCasino && colorJugador == colorCasino)
    {
        return 4 * gonzosApostar;
    }
    // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if(numeroJugador == numeroCasino)
    {
        return 1.5 * gonzosApostar;
    }
    // no gana ni pierde
    else if(colorJugador == colorCasino)
    {
        return gonzosApostar;
    }
     // pierde todo lo apostado
    else
    {
        return 0;
    }
}

DosColores::~DosColores() {

}
