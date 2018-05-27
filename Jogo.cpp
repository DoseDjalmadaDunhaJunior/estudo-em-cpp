//
// Created by djalma cunha on 27/05/2018.
//

#include "Jogo.h"

void Jogo::setNome(string halo) {
    nome = halo;
}

void Jogo::setNota(int um) {
    nota = um;
}

void Jogo::setPlataforma(string xbox) {
    plataforma = xbox;
}

string Jogo::getNome() {
    return nome;
}

string Jogo::getPlataforma() {
    return plataforma;
}

int Jogo::getNota() {
    return nota;
}