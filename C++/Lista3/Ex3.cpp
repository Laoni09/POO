#include <iostream>
#include <map>
#include <set>
#include <string>

void usingMap() {
    std::map<std::string, int> deck;

    deck["Exodia, O Proibido"] = 1;
    deck["Braço Direito de O Proibido"] = 1;
    deck["Braço Esquerdo de O Proibido"] = 1;
    deck["Perna Direita de O Proibido"] = 1;
    deck["Perna Esquerda de O Proibido"] = 1;

    std::cout << "Cartas no deck:" << std::endl;
    for (const auto& carta : deck) {
        std::cout << carta.first << " - Quantidade: " << carta.second << std::endl;
    }

    std::cout << "\nIniciando partida..." << std::endl;

    deck.erase("Exodia, O Proibido");
    std::cout << "Exodia, O Proibido foi usada e removida do deck." << std::endl;

    deck.erase("Braço Direito de O Proibido");
    std::cout << "Braço Direito de O Proibido foi usada e removida do deck." << std::endl;

    deck.erase("Braço Esquerdo de O Proibido");
    std::cout << "Braço Esquerdo de O Proibido foi usada e removida do deck." << std::endl;

    deck.erase("Perna Direita de O Proibido");
    std::cout << "Perna Direita de O Proibido foi usada e removida do deck." << std::endl;

    deck.erase("Perna Esquerda de O Proibido");
    std::cout << "Perna Esquerda de O Proibido foi usada e removida do deck.\n" << std::endl;

    if (deck.empty()) {
        std::cout << "Exodia invocado! Você dizimou seu oponente." << std::endl;
    } else {
        std::cout << "\nCartas restantes no deck:" << std::endl;
        std::map<std::string, int>::iterator carta;
        for (carta = deck.begin(); carta != deck.end(); carta++) {
            std::cout << carta->first << " - Quantidade: " << carta->second << std::endl;
        }
    }
}

void usintMultiMap() {
    std::multimap<std::string, int> mmap; 
    mmap.insert({"A", 1}); 
    mmap.insert({"B", 2});
    mmap.insert({"A", 3});
    std::map<std::string, int>::iterator it;
    for (it = mmap.begin(); it != mmap.end(); it++)
        std::cout << it->first << ": " << it->second << std::endl;
}

void usingSet() {
    std::set<int> s = {3, 1, 4, 1, 2}; 
    for (int i : s) std::cout << i << " ";
}

void usingMultiSet() {
    std::multiset<std::string> ms = {"Inter", "Flamengo", "Cortinas", "BBBremio", "Cruzeiro"};
    for (const std::string& s : ms) std::cout << s << " "; 
}

int main() {
    usingMap();
    usintMultiMap();
    usingSet();
    usingMultiSet();

    return 0;
}