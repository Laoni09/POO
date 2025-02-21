#include <iostream>
#include <array>
#include <vector>

using namespace std;
int main(){
    // std::array possui arranjo estático (é um vetor de C)
    // std::vector possui arranjo dinâmico

    // Declaração, inicialização e acesso de arrays
    constexpr std::array<int, 5> prime{ 2, 3, 5, 7, 11 };
    std::cout << std::get<3>(prime); // imprime o valor do elemento com índice 3
    std::cout << std::get<9>(prime); // índice inválido (erro de compilação)

    // Array size
    constexpr std::array arr { 9, 7, 5, 3, 1 };
    std::cout << "length: " << arr.size() << '\n';
    std::cout << "length: " << std::size(arr);

    
    // Declaração, inicialização e acesso de vectors 
    std::vector<int> primes{ 2, 3, 5, 7, 11 };
    std::vector vowels { 'a', 'e', 'i', 'o', 'u' };
    std::cout << "The first prime number is: " << primes[0] << '\n';
    std::cout << "The second prime number is: " << primes[1] << '\n';
    std::cout << "The sum of the first 5 primes is: " <<
    primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';
}