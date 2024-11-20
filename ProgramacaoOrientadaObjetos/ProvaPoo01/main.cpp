#include <iostream>
using namespace std;

#include "Aluguel.hpp"
#include "Residencia.hpp"
#include "Seguro.hpp"

float calcAluguel(Aluguel a) { // metodo friend da classe Aluguel
  return a.dias * a.preco + a.calcJuros();
}

int main(void) {
  Aluguel *aa;

  cout << "\nImobiliaria Jao\n" << endl;
  { // bloco limitador 1
    cout << "\nsimulacao se aluguel" << endl;
    Aluguel a1("Casa", 1500, 12, 0); // metodo construtor sem cep
    aa = &a1;                        // vinculacao dinamica
    aa->imprime();                   // metodo usando ponteiro
    cout << "valor total do aluguel: R$" << calcAluguel(*aa);
  }

  { // bloco limitador 2
    cout << "\nSimulacao de aluguel residencial sem seguro" << endl;
    Aluguel *a2 = new Aluguel("Apartamento", 850, 24, 0);
    a2->imprime();
    cout << "Valor total do aluguel: R$" << calcAluguel(*a2);
    delete (a2);
    cout << "\nAluguel com atraso em 3 dias" << endl;
    const Seguro s1(1.5);
    Residencia c1("Aterrado", "12345678", "Casa", 1000, 12, 7);
    c1.setPreco(c1.calcSeguro(s1));
    aa = &c1;
    aa->imprime();
    cout << "Valor total do aluguel: R$" << calcAluguel(*aa);
    cout << "\nJuros por atraso: R$" << c1.calcJuros();
  }

  return 0;
}
