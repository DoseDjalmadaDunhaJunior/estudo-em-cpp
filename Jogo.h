//
// Created by djalma cunha on 27/05/2018.
//
#include <iostream>
using namespace std;
#ifndef UM_POUCO_DE_TUDO_JOGO_H
#define UM_POUCO_DE_TUDO_JOGO_H


class Jogo {
public:
    void setNome(string);
    void setPlataforma(string);
    void setNota(int);
    string getNome();
    string getPlataforma();
    int getNota();

private:
    string nome;
    string plataforma;
    int nota;

};


#endif //UM_POUCO_DE_TUDO_JOGO_H
