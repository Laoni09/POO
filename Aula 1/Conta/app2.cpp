#include <iostream>
#include "Conta.h"
using namespace std;
int main() {
  char numero [] = "1234-5";
  char agencia [] = "007-x";
  Conta c(numero,agencia); //Declaração para instanciar objeto em tempo de compilação
  c.creditar(300);
  cout<<"Conta tem saldo = " << c.getSaldo() << endl;
  c.debitar(200); //Utiliza-se operador “.” para utilizar os métodos do objeto criado estaticamente
  cout<<"Conta tem saldo = " << c.getSaldo() << endl;
  return 0;
}
