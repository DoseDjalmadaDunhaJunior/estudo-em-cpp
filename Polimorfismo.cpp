//
// Created by djalma cunha on 27/05/2018.
//

#include "Polimorfismo.h"
#include <vector>

Polimorfismo::Polimorfismo() {
    PlayStation top;
    Xbox barato;

    top.setNome("God of War");
    top.setDificuldade("Medio");
    top.setGeracao(2);
    top.setNota(10);
    top.setPlataforma("ps2");
    top.setPossuiu(true);

    barato.setNome("Halo");
    barato.setDificuldade("Medio");
    barato.setGeracao(2);
    barato.setNota(5);
    barato.setPlataforma("Xbox 360");
    barato.setPossuiu(true);

    cout<< top.getNome() << "\n"
                            << top.getDificuldade()
        << "\n" << top.getGeracao() << "\n" << top.getNota()
        << "\n" << top.getPlataforma() << top.getPossuiu()
            << "\n" << barato.getDificuldade()
            << "\n" << barato.getGeracao() << "\n" << barato.getNota()
            << "\n" << barato.getPlataforma() << barato.getPossuiu() <<endl;
}