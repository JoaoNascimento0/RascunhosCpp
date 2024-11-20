using namespace std;

#ifndef SEGURO_H
#define SEGURO_H

class Seguro {
private:
  float plano;

public:
  Seguro(float);
  ~Seguro();

  void setPlano(float);
  float getPlano();

  friend class Residencia; // seguro e friend de residencia
};
#endif
