#ifndef COLECAOVETOR_H_INCLUDED
#define COLECAOVETOR_H_INCLUDED
#include "ColecaoVetor.h"
#include "Pessoa.h"
#include "Colecao.h"
#include <vector>

class ColecaoVetor: public Colecao {
        vector<Pessoa*> dados;
    public:
        vector<Pessoa*> getDados() { return dados; }
        bool inserir(Pessoa* p) override;
        bool remover() override;
        bool atualizar(Pessoa* p, int indice) override;
        bool pesquisar(Pessoa* p) override;
        Pessoa* pesquisar(int indice) override;
};

#endif // COLECAOVETOR_H_INCLUDED