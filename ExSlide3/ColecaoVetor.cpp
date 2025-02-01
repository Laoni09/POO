#include "ColecaoVetor.h"
#include <iostream>
using namespace std;

bool ColecaoVetor::inserir(Pessoa* p)
{
    dados.push_back(p);
    return true;
}

bool ColecaoVetor::remover()
{
    if(dados.empty()) return false;
    delete dados.back();
    dados.pop_back();
    return true;
}

bool ColecaoVetor::atualizar(Pessoa* p, int indice)
{
    delete dados[indice];
    dados[indice] = p;
    return false;
} 

bool ColecaoVetor::pesquisar(Pessoa* p)
{
    /*if(find(dados.begin(), dados.end(), p) != dados.end()) {
        return true;
    }*/
    return false;
}

Pessoa* ColecaoVetor::pesquisar(int indice)
{
    if(indice < 0 && indice >= dados.size()) return nullptr;
    Pessoa* p = dados[indice];
    return p;
}
