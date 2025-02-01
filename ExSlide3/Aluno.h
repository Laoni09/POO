#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include "Pessoa.h"
#include <string>
class Aluno: public Pessoa {
    private:
        string matricula;
        string curso;
        double coeficiente;
        int anoIngresso;
    public:
        Aluno(string nome, 
                string cpf, 
                string dataNasc, 
                string fone, 
                string celular, 
                string matricula, 
                string curso, 
                double coeficiente, 
                int anoIngresso): Pessoa(nome, cpf, dataNasc, fone, celular) {
            this->matricula = matricula;
            this->curso = curso;
            this->coeficiente = coeficiente;
            this->anoIngresso = anoIngresso;
        }
};

#endif // ALUNO_H_INCLUDED