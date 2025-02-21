#include <iostream>
#include <string> // Para std::string e std::getline
#include <string_view>
using namespace std;

void printSV(std::string_view str){
    std::cout << str << '\n';
}

int main() {
    std::string nomeCompleto{};
    std::getline(std::cin >> std::ws, nomeCompleto);

    std::string curso{};
    std::getline(std::cin >> std::ws, curso);
    
    std::string matriculas{};
    std::getline(std::cin >> std::ws, matriculas);

    std::cout << "\nData\n";
    std::cout << nomeCompleto << '\n' << curso << '\n' << matriculas << endl;

    std::cout << "\nPrint with string_view\n";
    printSV(nomeCompleto);
    printSV(curso);
    printSV(matriculas);

    return 0;
}