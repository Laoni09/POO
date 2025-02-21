#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void usingStack() {
    std::stack<int> pilha;
    pilha.push(1); 
    std::cout << "Topo da pilha: " << pilha.top() << std::endl;
    pilha.pop(); 
    std::cout << "Novo topo: " << pilha.top() << std::endl;
}

void usingQueue() {
    std::queue<int> fila;
    fila.push(1); 
    fila.push(2); 
    std::cout << "Frente da fila: " << fila.front() << std::endl; 
    fila.pop(); 
    std::cout << "Nova frente: " << fila.front() << std::endl;
}

void usingPQueue() {
    std::priority_queue<int> pq;
    pq.push(3); // Insere 3
    pq.push(1); // Insere 1
    pq.push(4); // Insere 4
    pq.push(2); // Insere 2

    std::cout << "Elementos na priority_queue (em ordem de prioridade):" << std::endl;
    while (!pq.empty()) {
        std::cout << pq.top() << " "; 
        pq.pop(); 
    }
}

int main() {
    usingStack();
    usingQueue();
    usingPQueue();

    return 0;
}