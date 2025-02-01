#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include <string>

class Professor: public Pessoa {
    private:
        string formacao;
        string area;
        int anoAdmissao;
        int qtdeHoras;
    public:
        Professor(string nome, 
                    string cpf, 
                    string dataNasc, 
                    string fone, 
                    string celular, 
                    string formacao, 
                    string area, 
                    double anoAdmissao, 
                    int qtdeHoras): Pessoa(nome, cpf, dataNasc, fone, celular) {
            this->formacao = formacao;
            this->area = area;
            this->anoAdmissao = anoAdmissao;
            this->qtdeHoras = qtdeHoras;
        }
};

#endif // PROFESSOR_H_INCLUDED