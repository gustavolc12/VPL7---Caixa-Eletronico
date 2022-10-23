#include <iostream>
#include "../includes/intruso.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruso intruso;
    
    std::cin >> num_entradas;

    for(i=0; i < num_entradas; i++){
        if(i==0){
        std::cin.ignore();
        }
        std::getline(std::cin, senha);// Nesse getline quando a iteração passa pela segunda vez o primeiro elemento é ignorado, começando por um elemento a
        intruso.set_senha_vazada(senha);
    }
    std::cout << intruso.crack_senha() <<std::endl;
    
    return 0;
}