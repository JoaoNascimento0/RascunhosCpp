#include <iostream>
using namespace std;

#include "Seguro.hpp"

Seguro::Seguro(float plan) : plano(plan) {}
Seguro::~Seguro() { cout << "\nFim do Seguro" << endl; }

float Seguro::getPlano() { return plano; }
void Seguro::setPlano(float plan) { plano = plan; }
