//
// Created by usuario on 22/09/2021.
//

#include "MasMenos.h"

float MasMenos::jugar(float gonzosApostar) {
    cout << "Ingrese 0 para ir arriba o 1 para ir abajo" << endl;
    do{
        cin >> numeroJugador;
    }while (numeroJugador != 0 && numeroJugador != 1);
    srand(time(NULL));
    numeroCasino = (numeroJugador - (rand() % 2) ? 1 : 0);
    return calcularResultado(gonzosApostar);
}


float MasMenos::calcularResultado(float gonzosApostar) {
    return numeroCasino ? gonzosApostar * 5 : 0;
}

MasMenos::~MasMenos() {}

