//
// Created by djalma cunha on 27/05/2018.
//

#include "PlayStation.h"

int PlayStation::getGeracao() {
    return geracao;
}

bool PlayStation::getPossuiu() {
    return possuiu;
}

string PlayStation::getDificuldade() {
    return dificuldade;
}

void PlayStation::setDificuldade(string easy) {
    dificuldade = easy;
}

void PlayStation::setPossuiu(bool sim) {
    possuiu = sim;
}

void PlayStation::setGeracao(int um) {
    geracao = um;
}