#include "Data.h"

unsigned int Data::getDia(){
  return dia;
}
unsigned int Data::getMes(){
  return mes;
}
unsigned int Data::getAno(){
  return ano;
}
void Data::setDia(unsigned int d){
  dia = d;
}
void Data::setMes(unsigned int m){
  mes = m;
}
void Data::setAno(unsigned int a){
  ano = a;
}
Data::Data(unsigned int d, unsigned int m, unsigned int a){
  dia = d;
  mes = m;
  ano = a;
}

