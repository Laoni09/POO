#include <iostream>
#include "Data.h"
using namespace std;
int main(){
  Data *dt;
  int d = 13;
  int m = 11;
  int a = 2024;
  dt = new Data(d, m, a);
  if(dt == NULL){
    printf("Alocação sem sucesso");
    return 1;
  }
  else{
    cout << dt -> getDia() << "/" << dt -> getMes() << "/" << dt -> getAno() << "\n";
  }
  Data dt2(d , m, a);
  cout << dt2.getDia() << "/" << dt2.getMes() << "/" << dt2.getAno() << "\n";
  return 0;
}
