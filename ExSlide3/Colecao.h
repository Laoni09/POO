#ifndef COLECAO_H_INCLUDED
#define COLECAO_H_INCLUDED
#include "Colecao.h"
#include "Pessoa.h"

class Colecao {
    public:
        virtual bool inserir(Pessoa* p) = 0;
        virtual bool remover() = 0;
        virtual bool atualizar(Pessoa* p, int indice) = 0;
        virtual bool pesquisar(Pessoa* p) = 0;
        virtual Pessoa* pesquisar(int indice) = 0;
};

#endif // COLECAO_H_INCLUDED