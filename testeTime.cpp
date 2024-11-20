/*#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>

//https://www.arquivodecodigos.com.br/dicas/3576-c-como-formatar-datas-e-horas-em-c-usando-a-funcao-strftime.html
int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese_Brasil");
 
  time_t data_hora_segundos; //guarda os segundos deste 01/01/1970
  struct tm *timeinfo; //declara uma estrutura tm
  time(&data_hora_segundos); //preenche a variável data_hora_segundos
  timeinfo = localtime(&data_hora_segundos);  //preenche a estrutura timeinfo
  char data_formatada[80];  // um buffer para receber a data formatada
  //strftime(data_formatada, 80, "%A, %d de %B de %Y", timeinfo);  //vamos formatar
  strftime(data_formatada, 80, "%X_(%d/%m/%y)\n", timeinfo);
  printf("Resultado da formatação: %s\n\n", data_formatada);  // vamos exibir o resultado
 
  //system("PAUSE");
  return 0;
}*/

#include <iostream>
#include <string>
#include <ctime>
//using namespace std;
 
std::string date_hour(){
  std::time_t AUX = std::time(nullptr);
  std::tm* NOW = std::localtime(&AUX);
  char VAR[30];
  strftime(VAR, sizeof(VAR), "%X-(%d/%m/%y)", NOW);
  return VAR;
}

int main(int argc, char *argv[]){
  std::string receba = date_hour();
  std::cout << "saida: " << receba << std::endl;

  //std::cout << "Current Time and Date: " << dia_hora() << std::endl;
 
return 0;
}
