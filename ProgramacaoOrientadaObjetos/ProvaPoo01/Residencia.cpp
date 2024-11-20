#include <iostream>
using namespace std;

#include "Aluguel.h"
#include "Residencia.h"
#include "Seguro.h"

Residencia::Residencia(string m, const string &pl, const string &cat, float p,
                       int d, int at)
    : Aluguel(cat, p, d, at), marca(m), placa(pl) {}

Residencia::~Residencia() {
  cout << "\n\nResidencia fechada"
       << "\nBairro: " << getMarca() << "\nCEP: " << getPlaca() << endl;
}

string Residencia::getMarca() const { return marca; } // getters
string Residencia::getPlaca() const { return placa; }

void Residencia::setMarca(string m) { marca = m; } // setters

void Residencia::imprime() const { // polimorfismo em imprime
  Aluguel::imprime();
  cout << "\nMarca: " << getMarca() << "\nPlaca: " << getPlaca() << endl;
}

float Residencia::calcJuros() const { // metodo friend
  return atraso * (preco * 1.3);
}

float Residencia::calcSeguro(Seguro s) const { // heranca
  return s.plano * preco;
}
