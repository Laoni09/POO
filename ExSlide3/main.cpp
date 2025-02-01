#include <iostream>
#include "ColecaoVetor.h"
#include "Professor.h"
#include "Aluno.h"

int main() {
    Professor* prof = new Professor("Joao", "11634298503", "06052004", "46999074077", "46999074077", "matematica", "algebra linear", 2018, 350);
    Aluno* aluno = new Aluno("Laoni", "11634298503", "06052004", "46999074077", "46999074077", "matematica", "algebra linear", 8.58, 2023);
    ColecaoVetor colecao1;
    colecao1.inserir(prof);
    colecao1.inserir(aluno);
    for (int i = 0; i < colecao1.getDados().size(); i++) {
        cout << colecao1.getDados()[i]->getNome() << " ";
    }
}