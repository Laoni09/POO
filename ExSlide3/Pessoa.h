#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include "Pessoa.h"
#include <string>
using namespace std;

class Pessoa {
    protected:
        string nome;
        string cpf;
        string dataNasc;
        string fone;
        string celular;
    public:
        Pessoa(string nome, string cpf, string dataNasc, string fone, string celular);
        
        string getNome() { return nome; }
        string getCpf() { return cpf; }
        string getdataNasc() { return dataNasc; }
        string getFone() { return fone; }
        string getCelular() { return celular; }
};

#endif // PESSOA_H_INCLUDED