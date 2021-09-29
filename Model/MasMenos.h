//
// Created by usuario on 22/09/2021.
//

#ifndef CASINO_MASMENOS_H
#define CASINO_MASMENOS_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

using namespace std;

class MasMenos : public Juego {

protected:
    float calcularResultado(float gonzosApostar) override;
public:
    ~MasMenos();
    float jugar(float gonzosApostar) override;

};

#endif //CASINO_MASMENOS_H
