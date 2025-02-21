#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    // a
    int arrA[6];
    int j = 0;
    for(int i = 0; i < 12; i++){
        if(i % 2 != 0){
            arrA[j] = i;
            j++;
        }
    }
    for(int i = 0; i < 6; i++) std::cout << arrA[i] << endl;

    // b
    std::array<int, 6> arrB{};
    j = 0;
    for(int i = 0; i < 12; i++){
        if(i % 2 != 0){
            arrB[j] = i;
            j++;
        }
    }
    for(int i = 0; i < 6; i++) std::cout << arrB[i] << endl;

    // c
    std::array<int, 6> arrC{};
    j = 0;
    for(int i = 0; i < 12; i++){
        if(i % 2 != 0){
            arrC[j] = i;
            j++;
        }
    }
    for(int i = 0; i < 6; i++) std::cout << arrC[i] << endl;

    return 0;
} 