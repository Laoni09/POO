#include <iostream>
#include <string> // Para std::string e std::getline
#include <string_view>
using namespace std;

void printSV(std::string_view str){
    std::cout << str << '\n';
}

int main(){
    // leitura normal
    std::cout << "Digite sua cor favorita: ";
    std::string cor{};
    std::cin >> cor;


    // leitura de linhas completas
    std::cout << "Digite seu nome completo: ";
    std::string nome{};
    std::getline(std::cin >> std::ws, nome); // para ler uma linha completa de texto std::cout << "Digite sua cor favorita: ";
    std::string cor{};
    std::getline(std::cin >> std::ws, cor); // para ler uma linha completa de texto emstd::cout << "Seu nome é " << nome << " e sua cor favorita é " << cor << '\n';
    
    // string lenght
    std::string nome{ "Leo" };
    std::cout << nome << " possui " << nome.length() << " caracteres\n"; //C++11
    std::cout << nome << " possui " << std::size(nome) << " caracteres\n"; //C++20


    // uso da string-view (converte implicitamente)
    printSV("Hello, world!"); // chamada com string estilo C
    std::string s2{ "Hello, world!" };
    printSV(s2); // chamada com std::string
    std::string_view s3 { s2 };
    printSV(s3); // chamada com std::string_view

    std::string_view sv;
    static_cast<std::string>(sv); //converte string_view para string

    return 0;
}