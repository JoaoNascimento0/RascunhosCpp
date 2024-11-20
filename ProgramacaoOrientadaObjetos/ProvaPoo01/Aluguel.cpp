#include "Aluguel.h"
#include <iostream>
using namespace std;

// construtor
Aluguel::Aluguel(const string &cat, float p, int d, int at)
    : categoria(cat), preco(p), dias(d), atraso(at) {}
Aluguel::Aluguel(const string &cat, int d, int at)
    : categoria(cat), preco(0), dias(d), atraso(at) {}

Aluguel::~Aluguel() { // destrutor
  cout << "\nFim do objeto aluguel" << endl;
}

string Aluguel::getCategoria() const { return categoria; } // getters
float Aluguel::getPreco() const { return preco; }
int Aluguel::getDias() const { return dias; }
int Aluguel::getAtraso() const { return atraso; }

void Aluguel::setCategoria(string cat) { categoria = cat; } // setters
void Aluguel::setPreco(float p) { preco = p; }
void Aluguel::setDias(int d) { dias = d; }

void Aluguel::imprime() const { // polimorfismo em imprime
  cout << "\nCategoria : " << getCategoria()
       << "\nMeses alugado(a): " << getDias() << "\nPreco por mes: R$"
       << getPreco() << "\nAtraso: " << getAtraso() << endl;
}

float Aluguel::calcJuros()
    const { // metodo virtual, declarado aqui e construido na main.cpp
  return 0;
}
