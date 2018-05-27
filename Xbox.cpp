//
// Created by djalma cunha on 27/05/2018.
//

#include "Xbox.h"

int Xbox::getGeracao() {
    return geracao;
}

bool Xbox::getPossuiu() {
    return possuiu;
}

string Xbox::getDificuldade() {
    return dificuldade;
}

void Xbox::setDificuldade(string easy) {
    dificuldade = easy;
}

void Xbox::setPossuiu(bool sim) {
    possuiu = sim;
}

void Xbox::setGeracao(int um) {
    geracao = um;
}