//
// Created by djalma cunha on 27/05/2018.
//

#include "Container.h"
#include "PlayStation.h"

Container::Container() {
    vector<PlayStation *> ps1;
    //iterador
    vector<PlayStation *>::iterator ps2;
    ps1.push_back(new PlayStation);
    ps1.push_back(new PlayStation);
    ps1.push_back(new PlayStation);
    int contator = 0;
    for (ps2 = ps1.begin(); ps2 != ps1.end(); ps2++) {
        (*ps2)->setNome("God of War");
        (*ps2)->setDificuldade("Medio");
        (*ps2)->setGeracao(contator);
        (*ps2)->setNota((contator+2));
        (*ps2)->setPlataforma("ps" + (contator+1));
        if (contator % 2 != 0) {
            (*ps2)->setPossuiu(true);
        }
        else{
            (*ps2)->setPossuiu(false);
        }
        contator++;
    }
    for (ps2 = ps1.begin(); ps2 != ps1.end(); ps2++) {
        cout<< (*ps2)->getNome() << "\n"
        << (*ps2)->getDificuldade() << "\n"
        << (*ps2)->getGeracao() << "\n"
        << (*ps2)->getNota() << "\n"
        << (*ps2)->getPlataforma() << "\n"
        << (*ps2)->getPossuiu() << endl;
    }

}
