#include "BancoD.h"

BancoD::BancoD (int tam) {
    indice = 0;
    vetor = new Conta*[tam];


    tamanho = tam;



}

void BancoD::cadastrar(Conta* c) {
    if (indice < tamanho) {
        vetor[indice] = c;
        indice++;
    }
}
int BancoD::qtdContas() {
    return indice;
}
 Conta* BancoD::getConta(int ind){
    return vetor[ind];
 }

