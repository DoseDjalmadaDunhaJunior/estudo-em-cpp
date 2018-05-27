//
// Created by djalma cunha on 27/05/2018.
//

#include "Jogo.h"
#include <iostream>
using namespace std;
#ifndef UM_POUCO_DE_TUDO_PLAYSTATION_H
#define UM_POUCO_DE_TUDO_PLAYSTATION_H

class PlayStation: public Jogo{
public:
    void setGeracao(int);
    void setPossuiu(bool);
    void setDificuldade(string);
    int getGeracao();
    bool getPossuiu();
    string getDificuldade();

private:
    int geracao;
    bool possuiu;
    string dificuldade;
};


#endif //UM_POUCO_DE_TUDO_PLAYSTATION_H
