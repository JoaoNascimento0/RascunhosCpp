#include <string>
using namespace std;

#ifndef RESIDENCIA_H
#define RESIDENCIA_H

class Seguro;

class Residencia : public Aluguel {
private:
  string marca; // const, sem setter
  const string placa;
  ;

public:
  Residencia(string, const string &, const string &, float, int, int);
  ~Residencia();

  string getMarca() const; // getters
  string getPlaca() const;

  void setMarca(string); // setters

  float calcJuros() const;
  void imprime() const;
  float calcSeguro(Seguro) const;
};
#endif
