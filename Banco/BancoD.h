#ifndef BANCOD_H_INCLUDED
#define BANCOD_H_INCLUDED
#include "Conta.h"
class BancoD {
   private:
    Conta** vetor;
    int indice;
    int tamanho;
   public:
    void cadastrar(Conta* c);
    BancoD(int tam);
    int qtdContas();
    Conta* getConta(int ind);
};

#endif // BANCOD_H_INCLUDED
