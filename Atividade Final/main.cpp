#include <iostream>
#include "Calculadora.h"
#include "CalculadoraAdicao.h"
using namespace std;

int main() {
    Calculadora* calculadora = new Calculadora(2, 2);
    cout << calculadora->multiplicacao() << endl;
    Calculadora* calculadoraPlus = new CalculadoraAdicao(10.5, 10.5);
    //cout << calculadoraPlus->adicao() << endl;
    (dynamic_cast<CalculadoraAdicao*>(calculadoraPlus))->adicao();

    delete calculadora;
    delete calculadoraPlus;
}