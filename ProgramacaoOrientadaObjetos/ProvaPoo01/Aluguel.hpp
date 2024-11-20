#include <string>
using namespace std;

#ifndef ALUGUEL_H
#define ALUGUEL_H

class Aluguel {
protected:
  float preco;
  string categoria;
  int dias;
  const int atraso;

public:
  Aluguel(const string &, float, int, int); // sobrecarga no metodo Construtor
  Aluguel(const string &, int, int); // mesmo nome, mas argumentos diferentes
  ~Aluguel();

  string getCategoria() const; // getters
  float getPreco() const;
  int getDias() const;
  int getAtraso() const;

  void setCategoria(string); // setters
  void setPreco(float);
  void setDias(int);

  friend float
      calcAluguel(Aluguel); // metodo friend a ser implementado na main.cpp
  void imprime() const;
  virtual float calcJuros() const;
};
#endif
